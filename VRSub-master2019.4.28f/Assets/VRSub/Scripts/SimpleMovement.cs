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

    private void Awake(){
        steamvrMovement.AddOnAxisListener(Move, inputSourceLeft);
    }

    private Vector3 movement;
    private void Move(SteamVR_Action_Vector2 fromAction, SteamVR_Input_Sources fromSource, Vector2 axis, Vector2 delta){
        Debug.Log("Moving");
        movement = new Vector3(axis.x, 0f, axis.y);
        movement = movement.normalized;
        Vector3 position = Rig.position + movement * MovementSpeed * Time.deltaTime;
        Rig.position = position;
    }
}
