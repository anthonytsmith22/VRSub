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
    [SerializeField] private SteamVR_Action_Boolean GrabEvent;
    [SerializeField] private SteamVR_Input_Sources InputSource;
    
    // Client player rig hands
    [SerializeField] private GameObject leftHand;
    private Valve.VR.InteractionSystem.Hand leftHandController;
    private Valve.VR.InteractionSystem.Hand rightHandController;
    [SerializeField] private GameObject rightHand;
    // Client player rig hand attached objects
    private GameObject leftAttachedObject;
    private GameObject rightAttachedObject;
    
    private NetworkIdentity playerIdentity;
    private NetworkConnection playerConnection;

    private NetworkTransform Focus;

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

    private void RequestAuthority(SteamVR_Action_Boolean fromAction, SteamVR_Input_Sources fromSource){
        if(Focus.clientAuthority.Equals(true)){
            Debug.Log("Has Client Authority");
        }else{
            Debug.Log("Does not have client authority");
        }
    }

    private void ReleaseAuthority(SteamVR_Action_Boolean fromAction, SteamVR_Input_Sources fromSource){
        Focus.clientAuthority.Equals(false);
    }

    private void OnDestroy(){
        GrabEvent.RemoveAllListeners(InputSource);
    }

    private void OnDisable(){
        OnDestroy();
    }

    private void OnEnable(){
        GrabEvent.AddOnStateDownListener(RequestAuthority, InputSource);
        GrabEvent.AddOnStateUpListener(ReleaseAuthority, InputSource);
    }

    // TODO 
    // Properly implement CmdGrantAuthority in GrabAuthorityInteractable
    // Handle checking, assigning and removing authority when grabbing/releasing interactable objects
}
