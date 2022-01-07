using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;
using Mirror;

public class NetworkHandController : NetworkBehaviour
{
    [SerializeField] public HandType Hand { get; private set; }
    [SerializeField] private GameObject NetworkVRHand;
    private Valve.VR.InteractionSystem.HandCollider NetworkVRHandColliderController;
    private Collider[] NetworkVRHandColliders;
    
    private GameObject ClientVRLeftHand;
    private VRSubHandCollider ClientVRLeftHandColliderController;
    private Collider[] ClientVRLeftHandColliders;
    
    private GameObject ClientVRRightHand;
    private VRSubHandCollider ClientVRRightHandColliderController;
    private Collider[] ClientVRRightHandColliders;
    private int numColliders;

    private void Awake(){
        NetworkVRHandColliderController = NetworkVRHand.GetComponentInChildren<Valve.VR.InteractionSystem.HandCollider>();
        if(NetworkVRHandColliderController == null){ Debug.LogWarning("No HandCollider script found in NetworkHand"); }
        NetworkVRHandColliders = NetworkVRHandColliderController.colliders;
        if(NetworkVRHandColliders == null){ Debug.LogWarning("No colliders found in NetworkHand"); }
        GetClientHands(true, true);
        numColliders = NetworkVRHandColliders.Length;
    }

    private void Start(){
        DisableSameHandCollision();
    }

    private void DisableSameHandCollision(){
        int i, j;
        switch(Hand){
            case HandType.LeftHand:
                for(i = 0; i < numColliders; i++){
                    for(j = 0; j < numColliders; j++){
                        Physics.IgnoreCollision(NetworkVRHandColliders[i], ClientVRLeftHandColliders[j]);
                    }
                }
                break;
            case HandType.RightHand:
                for(i = 0; i < numColliders; i++){
                    for(j = 0; j < numColliders; j++){
                        Physics.IgnoreCollision(NetworkVRHandColliders[i], ClientVRRightHandColliders[j]);
                    }
                }
                break;
        }
    }

    private void GetClientHands(bool left, bool right){
        if(left){
            if(ClientVRLeftHand == null){
                ClientVRLeftHand = GameObject.Find("PlayerRig").transform.Find("SteamVRObjects").transform.Find("LeftHand").gameObject;
                ClientVRLeftHandColliderController = ClientVRLeftHand.GetComponentInChildren<VRSubHandCollider>();
                ClientVRLeftHandColliders = ClientVRLeftHandColliderController.colliders;
            }
        }
        if(right){
            if(ClientVRRightHand == null){
                ClientVRRightHand = GameObject.Find("PlayerRig").transform.Find("SteamVRObjects").transform.Find("RightHand").gameObject;
                ClientVRLeftHandColliderController = ClientVRRightHand.GetComponentInChildren<VRSubHandCollider>();
                ClientVRRightHandColliders = ClientVRRightHandColliderController.colliders;
            }
        }
    }

    private void OnCollisionEnter(Collision collision){
        if(isLocalPlayer){
            if(collision.gameObject.tag == "ClientLeftHand"){
                if(ClientVRLeftHandColliders == null){ GetClientHands(true, false); }
                int i, j;
                for(i = 0; i < NetworkVRHandColliders.Length; i++){
                    for(j = 0; j < ClientVRLeftHandColliders.Length; j++){
                        Physics.IgnoreCollision(NetworkVRHandColliders[i], ClientVRLeftHandColliders[j]);
                    }
                }
            }
        }

    }

    public enum HandType{
        LeftHand,
        RightHand
    }
}