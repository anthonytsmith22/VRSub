using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;

public class Movement : MonoBehaviour
{
    [SerializeField] private GameObject PlayerRig;
    [SerializeField] private CharacterController Controller;
    

    [SerializeField] private SteamVR_Action_Vector2 steamvrMovement;
    [SerializeField] private SteamVR_Input_Sources inputSourceLeft;
    [SerializeField] private SteamVR_Input_Sources inputSourceRight;
    [SerializeField] private bool Grounded;

    private GameObject VRCamera;
    private Vector3 movement;
    [SerializeField] private float movementSpeed = 2.8f;
    private Vector3 gravity;

    private LayerMask layerMask;
    private float sphereRadius = 0.125f;
    private float maxDistance = 0.45f;
    private void Awake(){
        gravity = new Vector3(0f, -9.8f, 0f);
        Controller = GetComponent<CharacterController>();
        
    }

    private void Start(){
        if(PlayerRig == null){
            PlayerRig = GameObject.Find("PlayerRig");
        }
        VRCamera = GameObject.Find("VRCamera").gameObject;
        Controller.enabled = true;
        OnEnable();
        IEnumerator coroutine = reduceCharacterControllerRadius(1.0f);
        StartCoroutine(coroutine);
    }

    private void Update(){
        IgnoreBodyCollider();
        Grounded = CheckGrounded();
        Grounded = Controller.isGrounded;
        if(!Grounded){
            Gravity();
        }
    }

    // Have bodyCollider's sphere collider component ignore CharacterController collider
    private void IgnoreBodyCollider(){
        GameObject SteamVRObject = GameObject.Find("SteamVRObjects");
        CapsuleCollider bodyCollider = SteamVRObject.transform.Find("BodyCollider").gameObject.GetComponent<CapsuleCollider>();
        if(bodyCollider == null){
            Debug.Log("No capsule collider");
        }
        Physics.IgnoreCollision(Controller, bodyCollider);
    }

    private void Move(SteamVR_Action_Vector2 fromAction, SteamVR_Input_Sources fromSource, Vector2 axis, Vector2 delta){
        Debug.Log("Moving");
        movement = new Vector3(axis.x, 0f, axis.y);
        movement = VRCamera.transform.forward * movement.z + VRCamera.transform.right * movement.x;
        //Controller.SimpleMove(movement * movementSpeed);
        Controller.Move(movement * movementSpeed * Time.deltaTime);
    }

    private void Gravity(){
        Controller.Move(gravity * Time.deltaTime);
    }

    private bool CheckGrounded()
    {
        //return Physics.Raycast(transform.position, Vector3.down, 0.01f, 1 << LayerMask.NameToLayer("Ground"));
        RaycastHit hit;
        return Physics.SphereCast(PlayerRig.transform.position + Controller.center, sphereRadius, Vector3.down, out hit, maxDistance, layerMask, QueryTriggerInteraction.UseGlobal);
    }

    private void OnDestroy(){
        steamvrMovement.RemoveAllListeners(inputSourceLeft);
        steamvrMovement.RemoveAllListeners(inputSourceRight);
    }

    private void OnDisable(){
        OnDestroy();
    }

    private void OnEnable(){
        steamvrMovement.AddOnAxisListener(Move, inputSourceLeft);
        steamvrMovement.AddOnAxisListener(Move, inputSourceRight);
    }

    private IEnumerator reduceCharacterControllerRadius(float waitTime){
        yield return new WaitForSeconds(waitTime);
        Controller.radius = sphereRadius;
    }
}
