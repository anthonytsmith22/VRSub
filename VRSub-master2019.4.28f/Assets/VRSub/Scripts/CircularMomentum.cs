using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;

public class CircularMomentum : Valve.VR.InteractionSystem.CircularDrive
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
    private Transform selfIsHeld;
    Vector3 momentum = new Vector3(2f, 2f, 2f);

    void Start(){
        SteamVRObjects = GameObject.Find("SteamVRObjects").gameObject;  

        GrabEventLeft.AddOnStateDownListener(OnGrabLeft, InputSourceLeft);
        GrabEventLeft.AddOnStateUpListener(OnReleaseLeft, InputSourceLeft);
        GrabEventRight.AddOnStateDownListener(OnGrabRight, InputSourceRight);
        GrabEventRight.AddOnStateUpListener(OnReleaseRight, InputSourceRight);

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

    private void CheckAttachedObjectLeft(){
        selfIsHeld = leftHandController.currentAttachedObject.transform;
        if(!CheckIfSelf(selfIsHeld.gameObject)){
            selfIsHeld = null;
        }
    }

    private void CheckAttachedObjectRight(){
        selfIsHeld = rightHandController.currentAttachedObject.transform;
        if(!CheckIfSelf(selfIsHeld.gameObject)){
            selfIsHeld = null;
        }
    }

    bool CheckIfSelf(GameObject isSelf){
        if(isSelf == this){
            return true;
        }
        return false;
    }

    public void OnGrabLeft(SteamVR_Action_Boolean fromActionLeft, SteamVR_Input_Sources fromSourceLeft){
        Invoke("CheckAttachedObjectLeft", Time.deltaTime);
    }

    public void OnGrabRight(SteamVR_Action_Boolean fromActionRight, SteamVR_Input_Sources fromSourceRight){
        Invoke("CheckAttachedObjectRight", Time.deltaTime);
    }

    private void OnReleaseLeft(SteamVR_Action_Boolean fromAction, SteamVR_Input_Sources fromSource){
        selfIsHeld = null;
    }

    private void OnReleaseRight(SteamVR_Action_Boolean fromAction, SteamVR_Input_Sources fromSource){
        selfIsHeld = null;
    }
}
