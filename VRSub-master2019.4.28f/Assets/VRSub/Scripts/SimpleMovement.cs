using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;

public class SimpleMovement : MonoBehaviour
{
    [SerializeField] private Transform Rig;
    [SerializeField] private float MovementSpeed;
    [SerializeField] private SteamVR_Action_Vector2 steamvrMovement;
    [SerializeField] private SteamVR_Input_Sources inputSourceLeft;
    [SerializeField] private SteamVR_Input_Sources inputSourceRight;

    [SerializeField] private GameObject VRCamera;
    [SerializeField] private Transform groundCheck;
    private Transform RigPosition;
    private LayerMask zoneMask;
    private void Awake(){
        steamvrMovement.AddOnAxisListener(Move, inputSourceLeft);
        steamvrMovement.AddOnAxisListener(Rotate, inputSourceRight);
        groundMask = LayerMask.GetMask("Ground");
        RigPosition = transform;
        zoneMask = LayerMask.GetMask("MovementZone");
    }

    private void Update(){
        CheckZone();
    }

    private void Start(){
        SetMoveBounds(Container);
    }

    private Vector3 movement;
    private void Move(SteamVR_Action_Vector2 fromAction, SteamVR_Input_Sources fromSource, Vector2 axis, Vector2 delta){
        Debug.Log("Moving");
        movement = new Vector3(axis.x, 0f, axis.y);
        movement = VRCamera.transform.forward * movement.z + VRCamera.transform.right * movement.x;
        movement = movement.normalized;
        Vector3 position = Rig.position + movement * MovementSpeed * Time.deltaTime;
        position.y = 0f;
        position.x = Mathf.Clamp(position.x, minX, maxX);
        position.z = Mathf.Clamp(position.z, minZ, maxZ);
        Rig.position = position;
    }

    private void Rotate(SteamVR_Action_Vector2 fromAction, SteamVR_Input_Sources fromSource, Vector2 axis, Vector2 delta){
        float angle = 90f * Time.deltaTime;
        Vector3 rotation = new Vector3(0f, angle, 0f);
        if(axis.x > 0){
            Rig.Rotate(rotation);
        }else{
            Rig.Rotate(-rotation);
        }
    }

    private LayerMask groundMask;
    [SerializeField] private float groundCheckRadius = 0.2f;
    [SerializeField] private bool isGrounded = false;
    private void CheckForGround(){
        RaycastHit hit;
        Physics.SphereCast(groundCheck.position, groundCheckRadius, Vector3.down, out hit, 0f, groundMask);
        if(hit.collider == null){
            Gravity();
            isGrounded = false;
            return;
        }
        isGrounded = true;
    }

    private float gravity = -9.8f;
    private Vector3 gravityVector;
    private void Gravity(){
        gravityVector = new Vector3(0f, gravity, 0f).normalized;
        Vector3 position = Rig.position + gravityVector * Time.deltaTime;
        Rig.position = position;
    }

    [SerializeField] private Transform Container;
    [SerializeField] private float minX;
    [SerializeField] private float maxX;
    [SerializeField] private float minZ;
    [SerializeField] private float maxZ;
    
    private void OnTriggerEnter(Collider other){
        Debug.Log("Check bounds");
        if(other.tag.Equals("MoveArea")){
            Container = other.GetComponent<Transform>();
            SetMoveBounds(Container);
        }
    }

    private void CheckZone(){
        RaycastHit hit;
        Physics.SphereCast(RigPosition.position + new Vector3(0, 1.2f, 0), 0.5f, Vector3.down, out hit, 1.0f, zoneMask);
        if(hit.collider != null){
            Debug.Log("CheckBouds2");
            Transform container = hit.collider.transform;
            SetMoveBounds(container);
        }
    }

    public void SetMoveBounds(Transform container){
        Vector3 center = container.position;
        float centerX = center.x;
        float centerZ = center.z;

        float scaleX = container.localScale.x;
        float scaleZ = container.localScale.z;

        minX = centerX - (scaleX/2);
        maxX = centerX + (scaleX/2);

        minZ = centerZ - (scaleZ/2);
        maxZ = centerZ + (scaleZ/2);
    }

}
