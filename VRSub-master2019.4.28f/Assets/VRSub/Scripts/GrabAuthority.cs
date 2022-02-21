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
    private GrabAuthorityInteractable leftFocusAuthority;
    private GrabAuthorityInteractable rightFocusAuthority;
    
    private NetworkIdentity playerIdentity;
    private NetworkConnection playerConnection;

    private void Start(){
        if(!isLocalPlayer){ return; }
        if(PlayerRig == null){
            PlayerRig = GameObject.Find("PlayerRig");
        }
        SteamVRObjects = GameObject.Find("SteamVRObjects").gameObject;
        OnEnable();
        playerIdentity = GetComponent<NetworkIdentity>();  
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
    }

    private void CheckAttachedObjectRight(){
        if(!isLocalPlayer){ return; }
        rightAttachedObject = rightHandController.currentAttachedObject;
    }

    private void RequestAuthorityLeft(SteamVR_Action_Boolean fromActionLeft, SteamVR_Input_Sources fromSourceLeft){
        if(!isLocalPlayer){ return; }
        CheckAttachedObjectLeft();
        if(leftAttachedObject != null){
            Debug.Log("Left attached object found");
            leftFocusAuthority = leftAttachedObject.GetComponent<GrabAuthorityInteractable>();
            if(leftFocusAuthority != null){
                Debug.Log("Left GrabAuthorityInteractable found.");
                if(!leftFocusAuthority.inUse){
                    Debug.Log("Intertable not in use.");
                    leftFocusAuthority.CmdGrantAuthority(playerIdentity);
                    Debug.Log("Getting client authority");
                    if(leftFocusAuthority.CheckAuthority(playerIdentity)){
                        Debug.Log(playerIdentity + " given authority of " + leftFocusAuthority.identity);
                    }
                    else{
                        Debug.LogWarning(playerIdentity + "not given authority of " + leftFocusAuthority.identity);
                    }
                }
                else{
                    Debug.LogWarning("Interactable already in-use by another network player " + leftFocusAuthority.authorized + ".");
                }
            }
            else{
                Debug.LogWarning("No GrabAuthorityInteractable found in interactable.");
            }
        }
        else{
            Debug.LogWarning("No attached object found in left hand.");
        }
    }

    private void RequestAuthorityRight(SteamVR_Action_Boolean fromActionRight, SteamVR_Input_Sources fromSourceRight){
        if(!isLocalPlayer){ return; }
        CheckAttachedObjectRight();
        if(rightAttachedObject != null){
            Debug.Log("Right attached object found");
            rightFocusAuthority = rightAttachedObject.GetComponent<GrabAuthorityInteractable>();
            if(rightFocusAuthority != null){
                Debug.Log("Right GrabAuthorityInteractable found.");
                if(!rightFocusAuthority.inUse){
                    Debug.Log("Intertable not in use.");
                    rightFocusAuthority.CmdGrantAuthority(playerIdentity);
                    Debug.Log("Getting client authority");
                    if(rightFocusAuthority.CheckAuthority(playerIdentity)){
                        Debug.Log(playerIdentity + " given authority of " + rightFocusAuthority.identity);
                    }
                    else{
                        Debug.LogWarning(playerIdentity + "not given authority of " + rightFocusAuthority.identity);
                    }
                }
                else{
                    Debug.LogWarning("Interactable already in-use by another network player " + rightFocusAuthority.authorized + ".");
                }
            }
            else{
                Debug.LogWarning("No GrabAuthorityInteractable found in interactable");
            }
        }    
        else{
            Debug.LogWarning("No attached object found in right hand.");
        }
    }

    private void ReleaseAuthorityLeft(SteamVR_Action_Boolean fromAction, SteamVR_Input_Sources fromSource){
        if(!isLocalPlayer || leftAttachedObject == null){ return; }
        leftFocusAuthority.CmdRemoveAuthority();
        leftFocusAuthority = null;
        leftAttachedObject = null;
    }

    private void ReleaseAuthorityRight(SteamVR_Action_Boolean fromAction, SteamVR_Input_Sources fromSource){
        if(!isLocalPlayer || rightAttachedObject == null){ return; }
        rightFocusAuthority.CmdRemoveAuthority();
        rightFocusAuthority = null;
        rightAttachedObject = null;
    }

    private void OnDestroy(){
        if(!isLocalPlayer){ return; }
        GrabEventLeft.RemoveAllListeners(InputSourceLeft);
        GrabEventRight.RemoveAllListeners(InputSourceRight);
    }

    private void OnDisable(){
        if(!isLocalPlayer){ return; }
        OnDestroy();
    }

    private void OnEnable(){
        if(!isLocalPlayer){ return; }
        GrabEventLeft.AddOnStateDownListener(RequestAuthorityLeft, InputSourceLeft);
        GrabEventLeft.AddOnStateUpListener(ReleaseAuthorityLeft, InputSourceLeft);
        GrabEventRight.AddOnStateDownListener(RequestAuthorityRight, InputSourceRight);
        GrabEventRight.AddOnStateUpListener(ReleaseAuthorityRight, InputSourceRight);
    }   
}
