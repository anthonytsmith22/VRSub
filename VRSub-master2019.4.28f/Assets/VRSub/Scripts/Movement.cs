using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;

public class Movement : MonoBehaviour
{
    [SerializeField] private GameObject PlayerRig;
    private CharacterController Controller;
    private GameObject VRCamera;

    // Character movement and rotation
    private Vector3 movement;
    [SerializeField] private float movementSpeed = 2.8f;
    private Vector3 gravity;
    private float targetAngle;
    private Quaternion rotation;

    [SerializeField] private SteamVR_Action_Vector2 steamvrMovement;
    [SerializeField] private SteamVR_Input_Sources inputSource;

    private LayerMask layerMask;
    private float sphereRadius = 0.5f;
    private float maxDistance = 0.45f;
    private void Awake(){
        gravity = new Vector3(0f, -9.8f, 0f);
    }

    private void Start(){
        if(PlayerRig == null){
            PlayerRig = GameObject.Find("PlayerRig");
        }
        VRCamera = GameObject.Find("VRCamera").gameObject;
        Controller = GetComponent<CharacterController>();
        OnEnable();
        Controller.radius = 0.25f;
        Controller.enabled = false;
    }

    private void Update(){
        Gravity();
    }

    private void Move(SteamVR_Action_Vector2 fromAction, SteamVR_Input_Sources fromSource, Vector2 axis, Vector2 delta){
        Debug.Log("Moving");
        Controller.enabled = true;
        // targetAngle = Mathf.Atan2(axis.x, axis.y) * Mathf.Rad2Deg + VRCamera.transform.eulerAngles.y;
        // rotation = Quaternion.Euler(0f, targetAngle, 0f);
        // PlayerRig.transform.rotation = rotation;
        movement = new Vector3(axis.x, 0f, axis.y);
        movement = VRCamera.transform.forward * movement.z + VRCamera.transform.right * movement.x;
        Controller.Move(movement * movementSpeed * Time.deltaTime);
        Controller.enabled = false;
    }

    private void Gravity(){
        Controller.enabled = true;
        Controller.Move(gravity * Time.deltaTime);
        Controller.enabled = false;
    }

    private bool CheckGrounded()
    {
        //return Physics.Raycast(transform.position, Vector3.down, 0.01f, 1 << LayerMask.NameToLayer("Ground"));
        RaycastHit hit;
        return Physics.SphereCast(PlayerRig.transform.position + Controller.center, sphereRadius, Vector3.down, out hit, maxDistance, layerMask, QueryTriggerInteraction.UseGlobal);
    }

    private void OnDestroy(){
        steamvrMovement.RemoveAllListeners(inputSource);
    }

    private void OnDisable(){
        OnDestroy();
    }

    private void OnEnable(){
        steamvrMovement.AddOnAxisListener(Move, inputSource);
    }
}
