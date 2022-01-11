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
    [SerializeField] private Valve.VR.InteractionSystem.HandPhysics HandPhysics;
    
    private GameObject ClientVRLeftHand;
    private VRSubHandCollider ClientVRLeftHandColliderController;
    private Collider[] ClientVRLeftHandColliders;
    
    private GameObject ClientVRRightHand;
    private VRSubHandCollider ClientVRRightHandColliderController;
    private Collider[] ClientVRRightHandColliders;
    private int numColliders;

    private void Awake(){
        if(!isLocalPlayer){ return; }
        NetworkVRHandColliderController = NetworkVRHand.GetComponentInChildren<Valve.VR.InteractionSystem.HandCollider>();
        if(NetworkVRHandColliderController == null){ Debug.LogWarning("No HandCollider script found in NetworkHand"); }
        NetworkVRHandColliders = NetworkVRHandColliderController.colliders;
        if(NetworkVRHandColliders == null){ Debug.LogWarning("No colliders found in NetworkHand"); }
        GetClientHands(true, true);
        numColliders = NetworkVRHandColliders.Length;
    }

    private void Start(){
        if(!isLocalPlayer){ return; }
        //DisableSameHandCollision();
        DisableClientNetworkHandCollision();
        DisableNetworkHandCollisionDetection();
    }

    // Disable collisions between client vr hand and its corresponding hand at the start of GameObject's life
    // private void DisableSameHandCollision(){
    //     int i, j;
    //     switch(Hand){
    //         case HandType.Left:
    //             for(i = 0; i < numColliders; i++){
    //                 for(j = 0; j < numColliders; j++){
    //                     Physics.IgnoreCollision(NetworkVRHandColliders[i], ClientVRLeftHandColliders[j]);
    //                 }
    //             }
    //             break;
    //         case HandType.Right:
    //             for(i = 0; i < numColliders; i++){
    //                 for(j = 0; j < numColliders; j++){
    //                     Physics.IgnoreCollision(NetworkVRHandColliders[i], ClientVRRightHandColliders[j]);
    //                 }
    //             }
    //             break;
    //         default:
    //             NetworkVRHandColliderController.SetCollisionDetectionEnabled(false);
    //             break;
    //     }
    // }

    // Ignores Collisions Between the Client hands and the Network Hands
    private void DisableClientNetworkHandCollision(){
        if(!isLocalPlayer){ return; }
        int i, j, k;
        Collider[][] ClientHandColliders = new Collider[2][];
        ClientHandColliders[0] = ClientVRLeftHandColliders;
        ClientHandColliders[1] = ClientVRRightHandColliders;
        for(i = 0; i < 2; i++){
            for(j = 0; j < numColliders; j++){
                for(k = 0; k < numColliders; k++){
                    Physics.IgnoreCollision(ClientHandColliders[i][j], NetworkVRHandColliders[k]);
                }
            }
        }
    }

    // Disables Collision Detection from the Network Hand
    private void DisableNetworkHandCollisionDetection(){
        if(!isLocalPlayer) { return; }
        NetworkVRHandColliderController.SetCollisionDetectionEnabled(false);
    }

    private void GetClientHands(bool left, bool right){
        if(!isLocalPlayer){ return; }
        if(left){
            ClientVRLeftHand = GameObject.Find("PlayerRig").transform.Find("SteamVRObjects").transform.Find("LeftHand").gameObject;
            if(ClientVRLeftHand == null){
                Debug.LogWarning("No Client Left Hand found.");
            }else{
                ClientVRLeftHandColliderController = ClientVRLeftHand.GetComponentInChildren<VRSubHandCollider>();
                if(ClientVRLeftHandColliderController == null){
                    Debug.LogWarning("No HandCollider script found in left hand.");
                }else{
                    ClientVRLeftHandColliders = ClientVRLeftHandColliderController.colliders;
                    if(ClientVRLeftHandColliders == null || ClientVRLeftHandColliders.Length == 0){
                        Debug.LogWarning("No colliders found in left hand.");
                    }
                }
            }      
        }
        
        if(right){
            ClientVRRightHand = GameObject.Find("PlayerRig").transform.Find("SteamVRObjects").transform.Find("RightHand").gameObject;
            if(ClientVRRightHand == null){
                Debug.LogWarning("No Client Right Hand found.");
            }else{
                ClientVRRightHandColliderController = ClientVRRightHand.GetComponentInChildren<VRSubHandCollider>();
                if(ClientVRRightHandColliderController == null){
                    Debug.LogWarning("No HandCollider script found in right hand.");
                }else{
                    ClientVRRightHandColliders = ClientVRRightHandColliderController.colliders;
                    if(ClientVRRightHandColliders == null || ClientVRRightHandColliders.Length == 0){
                        Debug.LogWarning("No colliders found in right hand.");
                    }
                }
            }      
        }
    }

    // private void OnCollisionEnter(Collision collision){
    //     if(isLocalPlayer){
    //         int i, j;
    //         if(collision.gameObject.tag == "ClientLeftHand"){
    //             if(ClientVRLeftHandColliders == null){ GetClientHands(true, false); }
    //             for(i = 0; i < NetworkVRHandColliders.Length; i++){
    //                 for(j = 0; j < ClientVRLeftHandColliders.Length; j++){
    //                     Physics.IgnoreCollision(NetworkVRHandColliders[i], ClientVRLeftHandColliders[j]);
    //                 }
    //             }
    //         }
    //     }

    // }

    // Hand Physics Transfrom Network Update
    private Matrix4x4 wristToRoot;
    private Matrix4x4 rootToArmature;
    private Matrix4x4 wristToArmature;

    public enum HandType{
        Left,
        Right,
        Default
    }
}