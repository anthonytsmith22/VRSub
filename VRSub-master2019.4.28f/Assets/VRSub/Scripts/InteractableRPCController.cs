using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
using Valve.VR;

public class InteractableRPCController : NetworkBehaviour
{
    
    Vector3 lastFramePosition, lastFrameRotation, currentFramePosition, currrentFrameRotation;
    float marginForRPC = 0.01f;
    
    void Start(){
        // Get initial GameObject position and rotation
        lastFramePosition = transform.position;
        lastFrameRotation = transform.eulerAngles;
    }

    void Update(){
        // Get current GameObject position and rotation
        currentFramePosition = transform.position;
        currrentFrameRotation = transform.eulerAngles;

        // If interactable has moved or rotated, call ClientRpc to update transform
        if(currentFramePosition != lastFramePosition || currrentFrameRotation != lastFrameRotation){                 
            if(isServer){
                RpcUpdateTransform(currentFramePosition, currrentFrameRotation, transform);
            }else{
                CmdUpdateTransform(currentFramePosition, currrentFrameRotation, transform);
            }
        }
            
        // Set lastFrame values to currentFrame values for next update call
        lastFramePosition = currentFramePosition;
        lastFrameRotation = currrentFrameRotation;
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

}
