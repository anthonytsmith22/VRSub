using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
using Valve.VR;

public class InteractableRPCController : NetworkBehaviour
{
    // [SerializeField] private GameObject PlayerRig;
    // [SerializeField] private GameObject SteamVRObjects;
    // // SteamVR input events and input sources
    // [SerializeField] private SteamVR_Action_Boolean GrabEventLeft;
    // [SerializeField] private SteamVR_Action_Boolean GrabEventRight;
    // [SerializeField] private SteamVR_Input_Sources InputSourceLeft;
    // [SerializeField] private SteamVR_Input_Sources InputSourceRight;
    
    // // Client player rig hands
    // [SerializeField] private GameObject leftHand;
    // private Valve.VR.InteractionSystem.Hand leftHandController;
    // private Valve.VR.InteractionSystem.Hand rightHandController;
    // [SerializeField] private GameObject rightHand;
    // // Client player rig hand attached objects
    // private GameObject leftAttachedObject;
    // private GameObject rightAttachedObject;
    // private NetworkIdentity playerIdentity;

    //     private void Start(){
    //     if(!isLocalPlayer){ return; }
    //     if(PlayerRig == null){
    //         PlayerRig = GameObject.Find("PlayerRig");
    //     }
    //     SteamVRObjects = GameObject.Find("SteamVRObjects").gameObject;
    //     playerIdentity = GetComponent<NetworkIdentity>();  

    //     GrabEventLeft.AddOnStateDownListener(OnGrabLeft, InputSourceLeft);
    //     GrabEventLeft.AddOnStateUpListener(OnReleaseLeft, InputSourceLeft);
    //     GrabEventRight.AddOnStateDownListener(OnGrabRight, InputSourceRight);
    //     GrabEventRight.AddOnStateUpListener(OnReleaseRight, InputSourceRight);

    //     CheckHands();
    // }

    // private GameObject GetHand(string hand){
    //     if(!isLocalPlayer){ return null; }
    //     return SteamVRObjects.transform.Find(hand).gameObject;
    // }

    // private void CheckHands(){
    //     if(!isLocalPlayer){ return; }
    //     if(leftHand == null){
    //         leftHand = GetHand("LeftHand");
    //         leftHandController = leftHand.GetComponent<Valve.VR.InteractionSystem.Hand>();
    //     }
    //     if(rightHand == null){
    //         rightHand = GetHand("RightHand");
    //         rightHandController = rightHand.GetComponent<Valve.VR.InteractionSystem.Hand>();
    //     }
    // }

    // private void CheckAttachedObjectLeft(){
    //     if(!isLocalPlayer){ return; }
    //     leftAttachedObject = leftHandController.currentAttachedObject;

    // }

    // private void CheckAttachedObjectRight(){
    //     if(!isLocalPlayer){ return; }
    //     rightAttachedObject = rightHandController.currentAttachedObject;

    // }

    // public void OnGrabLeft(SteamVR_Action_Boolean fromActionLeft, SteamVR_Input_Sources fromSourceLeft){
    //     Invoke("CheckAttachedObjectLeft", Time.deltaTime);
    // }

    // public void OnGrabRight(SteamVR_Action_Boolean fromActionRight, SteamVR_Input_Sources fromSourceRight){
    //     Invoke("CheckAttachedObjectRight", Time.deltaTime);
    // }

    // private void OnReleaseLeft(SteamVR_Action_Boolean fromAction, SteamVR_Input_Sources fromSource){
    //     if(!isLocalPlayer || leftAttachedObject == null){ return; }
    //     leftAttachedObject = null;
    // }

    // private void OnReleaseRight(SteamVR_Action_Boolean fromAction, SteamVR_Input_Sources fromSource){
    //     if(!isLocalPlayer || rightAttachedObject == null){ return; }
    //     rightAttachedObject = null;
    // }

    // private void OnDestroy(){
    //     if(!isLocalPlayer){ return; }
    //     GrabEventLeft.RemoveAllListeners(InputSourceLeft);
    //     GrabEventRight.RemoveAllListeners(InputSourceRight);
    // }

    void Awake(){
    
    }

    Vector3 lastFramePosition, lastFrameRotation, currentFramePosition, currrentFrameRotation;
    float marginForRPC = 0.005f;
    
    void Start(){
        // Get initial GameObject position and rotation
        lastFramePosition = transform.position;
        lastFrameRotation = transform.eulerAngles;
    }

    void Update(){
        // Get current GameObject position and rotation
        currentFramePosition = transform.position;
        currrentFrameRotation = transform.eulerAngles;

        // If gameObject has moved or been rotated by atleast the marginForRPC, 
        // then we will issue a ClientRPC to update the transform across all clients
        if(Mathf.Abs((currentFramePosition - lastFramePosition).magnitude) >= marginForRPC || 
            Mathf.Abs((currrentFrameRotation - lastFrameRotation).magnitude) >= marginForRPC){
                
            if(isServer){
                RpcUpdateTransform();
            }else{
                CmdUpdateTransform();
            }
        }

        // Set lastFrame values to currentFrame values for next update call
        lastFramePosition = currentFramePosition;
        lastFrameRotation = currrentFrameRotation;
    }

    [ClientRpc]
    public void RpcUpdateTransform(){
        transform.position = currentFramePosition;
        transform.eulerAngles = currrentFrameRotation;
    }

    [Command]
    public void CmdUpdateTransform(){
        RpcUpdateTransform();
    }

}
