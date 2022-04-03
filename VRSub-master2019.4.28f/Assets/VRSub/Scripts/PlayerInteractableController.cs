using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
using Valve.VR;
public class PlayerInteractableController : NetworkBehaviour
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
    private Transform leftAttachedObject;
    private Transform rightAttachedObject;
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

    void Update(){
        if(isLocalPlayer && leftAttachedObject != null){
            Vector3 currentPosition = leftAttachedObject.position;
            Vector3 currentRotation = leftAttachedObject.eulerAngles;

            if(isServer){
                RpcUpdateTransform(currentPosition, currentRotation, leftAttachedObject);
            }else{
                CmdUpdateTransform(currentPosition, currentRotation, leftAttachedObject);
            }
        }

        if(isLocalPlayer && rightAttachedObject != null){
            Vector3 currentPosition = rightAttachedObject.position;
            Vector3 currentRotation = rightAttachedObject.eulerAngles;

            if(isServer){
                RpcUpdateTransform(currentPosition, currentRotation, rightAttachedObject);
            }else{
                CmdUpdateTransform(currentPosition, currentRotation, rightAttachedObject);
            }
        }
    }

    [ClientRpc]
    public void RpcUpdateTransform(Vector3 newPosition, Vector3 newRotation, Transform interactable){
        interactable.position = newPosition;
        interactable.eulerAngles = newRotation;
        Debug.Log("Updated Object Transform");
    }

    [Command(requiresAuthority = false)]
    public void CmdUpdateTransform(Vector3 newPosition, Vector3 newRotation, Transform interactable){
        RpcUpdateTransform(newPosition, newRotation, interactable);
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
        leftAttachedObject = leftHandController.currentAttachedObject.transform;

    }

    private void CheckAttachedObjectRight(){
        if(!isLocalPlayer){ return; }
        rightAttachedObject = rightHandController.currentAttachedObject.transform;

    }

    public void OnGrabLeft(SteamVR_Action_Boolean fromActionLeft, SteamVR_Input_Sources fromSourceLeft){
        Invoke("CheckAttachedObjectLeft", Time.deltaTime);
    }

    public void OnGrabRight(SteamVR_Action_Boolean fromActionRight, SteamVR_Input_Sources fromSourceRight){
        Invoke("CheckAttachedObjectRight", Time.deltaTime);
    }

    private void OnReleaseLeft(SteamVR_Action_Boolean fromAction, SteamVR_Input_Sources fromSource){
        if(!isLocalPlayer || leftAttachedObject == null){ return; }
        leftAttachedObject = null;
    }

    private void OnReleaseRight(SteamVR_Action_Boolean fromAction, SteamVR_Input_Sources fromSource){
        if(!isLocalPlayer || rightAttachedObject == null){ return; }
        rightAttachedObject = null;
    }

    private void OnDestroy(){
        if(!isLocalPlayer){ return; }
        GrabEventLeft.RemoveAllListeners(InputSourceLeft);
        GrabEventRight.RemoveAllListeners(InputSourceRight);
    }
}
