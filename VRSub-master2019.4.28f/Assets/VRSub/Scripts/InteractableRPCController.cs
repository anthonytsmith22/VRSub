using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
using Valve.VR;

public class InteractableRPCController : NetworkBehaviour
{
    
    Vector3 lastSendPosition, lastSendRotation, currentFramePosition, currrentFrameRotation;
    float marginForRPC = 0.001f;
    
    void Start(){
        // Get initial GameObject position and rotation
        lastSendPosition = transform.position;
        lastSendRotation = transform.eulerAngles;
    }

    void Update(){
        // Get current GameObject position and rotation
        currentFramePosition = transform.position;
        currrentFrameRotation = transform.eulerAngles;

        // If gameObject has moved or been rotated by atleast the marginForRPC, 
        // then we will issue a ClientRPC to update the transform across all clients
        if(Mathf.Abs((currentFramePosition - lastSendPosition).magnitude) >= marginForRPC || 
            Mathf.Abs((currrentFrameRotation - lastSendRotation).magnitude) >= marginForRPC){
                
            if(isServer){
                RpcUpdateTransform(currentFramePosition, currrentFrameRotation, transform);
            }else{
                CmdUpdateTransform(currentFramePosition, currrentFrameRotation, transform);
            }   
        }
    }

    [ClientRpc]
    public void RpcUpdateTransform(Vector3 newPosition, Vector3 newRotation, Transform interactable){
        interactable.position = newPosition;
        interactable.eulerAngles = newRotation;
        // Set lastSend values to currentFrame values for next update call
        lastSendPosition = currentFramePosition;
        lastSendRotation = currrentFrameRotation;
    }

    [Command(requiresAuthority = false)]
    public void CmdUpdateTransform(Vector3 newPosition, Vector3 newRotation, Transform interactable){
        RpcUpdateTransform(newPosition, newRotation, interactable);
    }

}