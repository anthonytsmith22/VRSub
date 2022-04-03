﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
using Valve.VR;

public class InteractableRPCController : NetworkBehaviour
{

    [SyncVar] public Transform localTransform;

    void Awake(){
        localTransform = transform;
        NetworkTransform net = GetComponent<NetworkTransform>();
        NetworkIdentity iden = GetComponent<NetworkIdentity>();
        
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
        CmdOverrideUpdateTransform();
        // Set lastFrame values to currentFrame values for next update call
        lastFramePosition = currentFramePosition;
        lastFrameRotation = currrentFrameRotation;
    }

    [ClientRpc]
    public void RpcUpdateTransform(){
        transform.position = currentFramePosition;
        transform.eulerAngles = currrentFrameRotation;
        Debug.Log("Updated Object Transform");
    }

    [Command(requiresAuthority = false)]
    public void CmdUpdateTransform(){
        RpcUpdateTransform();
    }

    [Command(requiresAuthority = false)]
    public void CmdOverrideUpdateTransform(){
        transform.position = currentFramePosition;
        transform.eulerAngles = currrentFrameRotation;
    }

}
