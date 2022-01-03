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
        if(PlayerRig == null){
            PlayerRig = GameObject.Find("PlayerRig");
        }
        SteamVRObjects = PlayerRig.transform.Find("SteamVRObjects").gameObject;
        OnEnable();
        playerIdentity = GetComponent<NetworkIdentity>();
        playerConnection = GetComponent<NetworkConnection>();
        if(playerConnection == null){
            Debug.LogWarning("NetworkConnection not found!");
        }   

        CheckHands();
    }

    private void Update(){
        CheckHands();
    }

    private GameObject GetHand(string hand){
        return SteamVRObjects.transform.Find(hand).gameObject;
    }

    private void CheckHands(){
        if(leftHand == null){
            leftHand = GetHand("LeftHand");
            leftHandController = leftHand.GetComponent<Valve.VR.InteractionSystem.Hand>();
        }
        if(rightHand == null){
            rightHand = GetHand("RightHand");
            rightHandController = rightHand.GetComponent<Valve.VR.InteractionSystem.Hand>();
        }
    }

    private void CheckAttachedObjects(){
        leftAttachedObject = leftHandController.currentAttachedObject;
        rightAttachedObject = rightHandController.currentAttachedObject;
    }

    private void RequestAuthorityLeft(SteamVR_Action_Boolean fromActionLeft, SteamVR_Input_Sources fromSourceLeft){
        CheckAttachedObjects();
        if(leftAttachedObject != null){
            leftFocusAuthority = leftAttachedObject.GetComponent<GrabAuthorityInteractable>();
            if(!leftFocusAuthority.inUse){
                leftFocusAuthority.CmdGrantAuthority(playerIdentity);
            }
            else{
                Debug.Log("Interactable already in-use by another network player.");
            }
        }
    }

    private void RequestAuthorityRight(SteamVR_Action_Boolean fromActionRight, SteamVR_Input_Sources fromSourceRight){
        CheckAttachedObjects();
        if(rightAttachedObject != null){
            rightFocusAuthority = rightAttachedObject.GetComponent<GrabAuthorityInteractable>();
            if(!rightFocusAuthority.inUse){
                rightFocusAuthority.CmdGrantAuthority(playerIdentity);
            }
            else{
                Debug.Log("Interactable alreay in-use by another network player");
            }
        }
    }

    private void ReleaseAuthorityLeft(SteamVR_Action_Boolean fromAction, SteamVR_Input_Sources fromSource){
        leftFocusAuthority.CmdRemoveAuthority();
        leftFocusAuthority = null;
        leftAttachedObject = null;
    }

    private void ReleaseAuthorityRight(SteamVR_Action_Boolean fromAction, SteamVR_Input_Sources fromSource){
        rightFocusAuthority.CmdRemoveAuthority();
        rightFocusAuthority = null;
        rightAttachedObject = null;
    }

    private void OnDestroy(){
        GrabEventLeft.RemoveAllListeners(InputSourceLeft);
        GrabEventRight.RemoveAllListeners(InputSourceRight);
    }

    private void OnDisable(){
        OnDestroy();
    }

    private void OnEnable(){
        GrabEventLeft.AddOnStateDownListener(RequestAuthorityLeft, InputSourceLeft);
        GrabEventLeft.AddOnStateUpListener(ReleaseAuthorityLeft, InputSourceLeft);
        GrabEventRight.AddOnStateDownListener(RequestAuthorityRight, InputSourceRight);
        GrabEventRight.AddOnStateUpListener(ReleaseAuthorityRight, InputSourceRight);
    }   
}
