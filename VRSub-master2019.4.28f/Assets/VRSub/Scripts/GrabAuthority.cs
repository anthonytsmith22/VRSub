using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using System.Collections.ObjectModel;
using Valve.VR;
using Mirror;

public class GrabAuthority : NetworkBehaviour
{
    [SerializeField] private GameObject PlayerRig;
    [SerializeField] private GameObject SteamVRObjects;
    // SteamVR input events and input sources
    [SerializeField] private SteamVR_Action_Boolean GrabEventLeft;
    [SerializeField] private SteamVR_Action_Boolean GrabEventRight;
    [SerializeField] private SteamVR_Input_Sources InputSourceLeft;
    [SerializeField] private SteamVR_Input_Sources InputSourceRight;
    
    // Client player rig hands
    [SerializeField] private GameObject leftHand;
    private Valve.VR.InteractionSystem.Hand leftHandController;
    private Valve.VR.InteractionSystem.Hand rightHandController;
    [SerializeField] private GameObject rightHand;
    // Client player rig hand attached objects
    private GameObject leftAttachedObject;
    private GameObject rightAttachedObject;
    private GrabAuthorityInteractable leftAuthorityController;
    private GrabAuthorityInteractable rightAuthorityController;
    
    private NetworkIdentity playerIdentity;

    private void Start(){
        if(!isLocalPlayer){ return; }
        if(PlayerRig == null){
            PlayerRig = GameObject.Find("PlayerRig");
        }
        SteamVRObjects = GameObject.Find("SteamVRObjects").gameObject;
        playerIdentity = GetComponent<NetworkIdentity>();  

        GrabEventLeft.AddOnStateDownListener(OnGrabLeft, InputSourceLeft);
        GrabEventLeft.AddOnStateUpListener(OnReleaseLeft, InputSourceLeft);
        GrabEventRight.AddOnStateDownListener(OnGrabRight, InputSourceRight);
        GrabEventRight.AddOnStateUpListener(OnReleaseRight, InputSourceRight);

        CheckHands();
    }

    private void Update(){
        if(isLocalPlayer){
            return;
        }
        CheckHands();
    }

    private GameObject GetHand(string hand){
        if(!isLocalPlayer){ return null; }
        return SteamVRObjects.transform.Find(hand).gameObject;
    }

    private void CheckHands(){
        if(!isLocalPlayer){ return; }
        if(leftHand == null){
            leftHand = GetHand("LeftHand");
            leftHandController = leftHand.GetComponent<Valve.VR.InteractionSystem.Hand>();
        }
        if(rightHand == null){
            rightHand = GetHand("RightHand");
            rightHandController = rightHand.GetComponent<Valve.VR.InteractionSystem.Hand>();
        }
    }

    private void CheckAttachedObjectLeft(){
        if(!isLocalPlayer){ return; }
        leftAttachedObject = leftHandController.currentAttachedObject;
        RequestAuthorityLeft();
    }

    private void CheckAttachedObjectRight(){
        if(!isLocalPlayer){ return; }
        rightAttachedObject = rightHandController.currentAttachedObject;
        RequestAuthorityRight();
    }

    public void OnGrabLeft(SteamVR_Action_Boolean fromActionLeft, SteamVR_Input_Sources fromSourceLeft){
        if(!isLocalPlayer){ return; }
        Invoke("CheckAttachedObjectLeft", Time.deltaTime);
    }

    public void OnGrabRight(SteamVR_Action_Boolean fromActionRight, SteamVR_Input_Sources fromSourceRight){
        if(!isLocalPlayer){ return; }
        Invoke("CheckAttachedObjectRight", Time.deltaTime);
    }

    private void RequestAuthorityLeft(){
        if(!isLocalPlayer){ return; }
        if(leftAttachedObject != null){
            leftAuthorityController = leftAttachedObject.GetComponent<GrabAuthorityInteractable>();
            if(!leftAuthorityController.inUse){
                NetworkIdentity interactable = leftAuthorityController.identity;
                CmdGetAuthority(interactable);
                if(interactable.hasAuthority){
                    Debug.Log("Has Authority");
                    rightAuthorityController.authorized = playerIdentity;
                    rightAuthorityController.inUse = true;
                }
            }
        }
    }

    [Command]
    public void CmdGetAuthority(NetworkIdentity interactable){
        if(!isLocalPlayer){ return; }
        if(connectionToClient.isReady){
            Debug.Log("Client ready.");
            interactable.RemoveClientAuthority();
            // THIS IS THE PROBLEM
            interactable.AssignClientAuthority(playerIdentity.connectionToClient);
        }else{
            Debug.Log("Client NOT ready!");
            StartCoroutine(WaitForReady(interactable));
        }
        
    }

    private IEnumerator WaitForReady(NetworkIdentity interactable){
        while(!connectionToClient.isReady){
            yield return new WaitForSeconds(0.25f);
        }
        CmdGetAuthority(interactable);
    }

    private void RequestAuthorityRight(){
        if(rightAttachedObject != null){
            rightAuthorityController = rightAttachedObject.GetComponent<GrabAuthorityInteractable>();
            if(!rightAuthorityController.inUse){
                NetworkIdentity interactable = rightAuthorityController.identity;
                CmdGetAuthority(interactable);
                if(interactable.hasAuthority){
                    Debug.Log("Has Authority");
                    rightAuthorityController.authorized = playerIdentity;
                    rightAuthorityController.inUse = true;
                }else{
                    Debug.Log("Failed to get authority");
                }
            }
        }
    }

    private void OnReleaseLeft(SteamVR_Action_Boolean fromAction, SteamVR_Input_Sources fromSource){
        if(!isLocalPlayer || leftAttachedObject == null){ return; }
        leftAuthorityController.RemoveAuthority();
        leftAuthorityController = null;
        leftAttachedObject = null;
    }

    private void OnReleaseRight(SteamVR_Action_Boolean fromAction, SteamVR_Input_Sources fromSource){
        if(!isLocalPlayer || rightAttachedObject == null){ return; }
        rightAuthorityController.RemoveAuthority();
        rightAuthorityController = null;
        rightAttachedObject = null;
    }

    private void OnDestroy(){
        if(!isLocalPlayer){ return; }
        GrabEventLeft.RemoveAllListeners(InputSourceLeft);
        GrabEventRight.RemoveAllListeners(InputSourceRight);
    }
}
