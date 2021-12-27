using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OutOfWorldReset : MonoBehaviour
{
    [SerializeField] private bool IsPlayer = false;
    private Vector3 OriginalPosition;
    private Vector3 ZeroVector;
    private Quaternion OriginalRotation;
    private Transform ThisObject;
    private Rigidbody RB;
    private CharacterController Controller;
    private void Awake(){
        ThisObject = GetComponent<Transform>();
        if(!IsPlayer){
            RB = GetComponent<Rigidbody>();
        }else{
            Controller = GetComponent<CharacterController>();
        }
        OriginalPosition = ThisObject.position;
        OriginalRotation = ThisObject.rotation;
        ZeroVector = new Vector3(0f, 0f, 0f);
    }

    private void OnTriggerEnter(Collider other){
        if(other.tag == "OutOfWorld"){
            Debug.Log("Collided with OutOfWorld trigger.  Resetting position/rotation.");
            ResetObject();
        }
    }

    private void ResetObject(){
        if(!IsPlayer){
            RB.velocity = ZeroVector;
            RB.angularVelocity = ZeroVector;
            ThisObject.rotation = OriginalRotation;
            ThisObject.position = OriginalPosition;
        }
        if(IsPlayer){
            Controller.gameObject.SetActive(false);
            ThisObject.rotation = OriginalRotation;
            ThisObject.position = OriginalPosition;
            Controller.gameObject.SetActive(true);
        }
        
        Debug.Log("reset");
    }
}