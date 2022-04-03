using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
using Valve.VR;

public class InteractableRPCController : NetworkBehaviour
{
    
    Vector3 lastFramePosition, lastFrameRotation, currentFramePosition, currrentFrameRotation;
    float marginForRPC = 0.005f;
    
    void Start(){
        // Get initial GameObject position and rotation
        lastFramePosition = transform.position;
        lastFrameRotation = transform.eulerAngles;
    }

    double lastServerSendTime;
    [Range(0, 1)] float sendInterval = 0.050f;
    void Update(){

        if (NetworkTime.localTime >= lastServerSendTime + sendInterval)
        {
            // Get current GameObject position and rotation
            currentFramePosition = transform.position;
            currrentFrameRotation = transform.eulerAngles;

            // // If gameObject has moved or been rotated by atleast the marginForRPC, 
            // // then we will issue a ClientRPC to update the transform across all clients
            // if(Mathf.Abs((currentFramePosition - lastFramePosition).magnitude) >= marginForRPC || 
            //     Mathf.Abs((currrentFrameRotation - lastFrameRotation).magnitude) >= marginForRPC){    
                // if(isServer){
                //     RpcUpdateTransform(currentFramePosition, currrentFrameRotation, transform);
                // }else{
                //     CmdUpdateTransform(currentFramePosition, currrentFrameRotation, transform);
                // } 
            // }

            // // Set lastFrame values to currentFrame values for next update call
            // lastFramePosition = currentFramePosition;
            // lastFrameRotation = currrentFrameRotation;

            if(isServer){
                RpcUpdateTransform(currentFramePosition, currrentFrameRotation, transform);
            }else{
                CmdUpdateTransform(currentFramePosition, currrentFrameRotation, transform);
            } 

            lastServerSendTime = NetworkTime.localTime;
        }
        
    }

    [ClientRpc]
    public void RpcUpdateTransform(Vector3 newPosition, Vector3 newRotation, Transform interactable){
        interactable.position = newPosition;
        interactable.eulerAngles = newRotation;
    }

    [Command(requiresAuthority = false)]
    public void CmdUpdateTransform(Vector3 newPosition, Vector3 newRotation, Transform interactable){
        RpcUpdateTransform(newPosition, newRotation, interactable);
    }

}
