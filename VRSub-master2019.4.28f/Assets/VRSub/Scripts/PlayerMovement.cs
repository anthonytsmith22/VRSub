using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;

[RequireComponent(typeof(CharacterController))]
public class PlayerMovement : MonoBehaviour
{
    [SerializeField] private GameObject PlayerRig;
    private GameObject SteamVRObjects;
    
    // SteamVR hand game objects and there colliders 
    [SerializeField] private GameObject ClientLeftHand;
    private Valve.VR.InteractionSystem.HandCollider ClientLeftHandColliderController;
    private Collider[] ClientLeftHandColliders;
    [SerializeField] private GameObject ClientRightHand;
    private Valve.VR.InteractionSystem.HandCollider ClientRightHandColliderController;
    private Collider[] ClientRightHandColliders;

    // How we will move our Client Rig
    private CharacterController characterController;

    // How we will get input from controllers
    [SerializeField] private SteamVR_Action_Vector2 steamvrMovement;
    [SerializeField] private SteamVR_Input_Sources inputSource;

    // How fast the player will move
    [SerializeField] private float MovementSpeed;

    
    private void Awake(){
        SteamVRObjects = PlayerRig.transform.Find("SteamVROBjects").gameObject;
        VRCamera = SteamVRObjects.transform.Find("VRCamera").gameObject;
    }

    private void Start(){
        GetClientHands();
        steamvrMovement.AddOnAxisListener(Move, inputSource);
    }

    private Vector3 movement;
    private GameObject VRCamera;
    private void Move(SteamVR_Action_Vector2 fromAction, SteamVR_Input_Sources fromSource, Vector2 axis, Vector2 delta){
        movement = new Vector3(axis.x, 0f, axis.y);
        movement = VRCamera.transform.forward * movement.z + VRCamera.transform.right * movement.x;
        characterController.Move(movement * MovementSpeed * Time.deltaTime);
    }

    private void GetClientHands(){
        // Get Hand colliders;
        
        // Left hand
        if(ClientLeftHand == null){
            ClientLeftHand = SteamVRObjects.transform.Find("LeftHand").gameObject;
            ClientLeftHandColliderController = ClientLeftHand.GetComponentInChildren<Valve.VR.InteractionSystem.HandCollider>();
            ClientLeftHandColliders = ClientLeftHandColliderController.colliders;
            // Have hand colliders ignore collisions with character controller
            IgnoreCollisionsWithController(ClientLeftHandColliders);
        }
        
        // Right hand
        if(ClientRightHand == null){
            ClientRightHand = SteamVRObjects.transform.Find("RightHand").gameObject;
            ClientRightHandColliderController = ClientRightHand.GetComponentInChildren<Valve.VR.InteractionSystem.HandCollider>();
            ClientRightHandColliders = ClientRightHandColliderController.colliders;

            IgnoreCollisionsWithController(ClientRightHandColliders);
        }
    }

    // Iterate through list of colliders and ignore collisions with characterController
    private void IgnoreCollisionsWithController(Collider[] colliders){
        int numColliders = colliders.Length;
        int i;
        for(i = 0; i < numColliders; i++){
            Physics.IgnoreCollision(colliders[i], characterController);
        }
    }

    private void IgnoreCollisionsWithController(Collider collider){
        Physics.IgnoreCollision(collider, characterController);
    }

    private void OnDestroy(){
        steamvrMovement.RemoveAllListeners(inputSource);
    }

}
