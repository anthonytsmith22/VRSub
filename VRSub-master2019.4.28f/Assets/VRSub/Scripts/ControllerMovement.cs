using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;

[RequireComponent(typeof(CharacterController))]
public class ControllerMovement : MonoBehaviour
{
    CharacterController characterController;
    [SerializeField] Collider BodyCollider;
    [SerializeField] Transform VRCameraTransform;
    [SerializeField] GameObject VRRightHand;
    [SerializeField] GameObject VRLeftHand;

    [SerializeField] SteamVR_Input_Sources InputSourceLeft;
    [SerializeField] SteamVR_Input_Sources InputSourceRight;

    [SerializeField] SteamVR_Action_Vector2 SteamVRMovement;
    
    [SerializeField] float MovementSpeed;

    void Awake(){
        characterController = GetComponent<CharacterController>();
        Physics.IgnoreCollision(characterController, BodyCollider);

        SteamVRMovement.AddOnAxisListener(Move, InputSourceLeft);
        SteamVRMovement.AddOnAxisListener(Rotate, InputSourceRight);
    }

    [SerializeField] GameObject LeftHandColliderController;
    [SerializeField] GameObject RightHandColliderController;

    void Start(){
        LeftHandColliderController = GameObject.Find("HandColliderLeft(Clone)").gameObject;
        RightHandColliderController = GameObject.Find("HandColliderRight(Clone)").gameObject;

        Valve.VR.InteractionSystem.HandCollider leftHandColliders = LeftHandColliderController.GetComponent<Valve.VR.InteractionSystem.HandCollider>();
        Valve.VR.InteractionSystem.HandCollider rightHandColliders = RightHandColliderController.GetComponent<Valve.VR.InteractionSystem.HandCollider>();

        LayerMask newMask = LayerMask.GetMask("Interactable");
        leftHandColliders.collisionMask = newMask;
        rightHandColliders.collisionMask = newMask;

        Collider[] leftColliders = leftHandColliders.colliders;
        Collider[] rightColliders = rightHandColliders.colliders;

        foreach(Collider collider in leftColliders){
            Physics.IgnoreCollision(characterController, collider);
            Physics.IgnoreCollision(BodyCollider, collider);
        }

        foreach(Collider collider in rightColliders){
            Physics.IgnoreCollision(characterController, collider);
            Physics.IgnoreCollision(BodyCollider, collider);
        }
    }

    void ManageController(){
        characterController.radius = .2f;
    }

    void LateUpdate(){
        // Set CharacterController transform.position.x and y to VRCamera.position.x and y
        Vector3 cameraPos = VRCameraTransform.localPosition;
        cameraPos.y = transform.position.y;
        //characterController.transform.position = cameraPos;
        characterController.center = cameraPos;
    }

    private void Move(SteamVR_Action_Vector2 fromAction, SteamVR_Input_Sources fromSource, Vector2 axis, Vector2 delta){
        Debug.Log("Move");
        Vector3 movement = new Vector3(axis.x, 0f, axis.y);
        movement = VRCameraTransform.forward * movement.z + VRCameraTransform.right * movement.x;
        if(!characterController.isGrounded){
            movement.y = -9.8f;
            characterController.Move(movement * MovementSpeed * Time.deltaTime);
        }else{
            characterController.Move(movement * MovementSpeed * Time.deltaTime);
        }
    }

    private void Rotate(SteamVR_Action_Vector2 fromAction, SteamVR_Input_Sources fromSource, Vector2 axis, Vector2 delta){
        transform.Rotate(0, axis.x * 45 * Time.deltaTime, 0);
    }

    void OnColliderEnter(Collision other){
        Debug.Log(other.transform.tag);
    }
}
