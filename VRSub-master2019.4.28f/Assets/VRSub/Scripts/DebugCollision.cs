using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DebugCollision : MonoBehaviour
{
    Collider collider;
    private void Awake(){
        collider = GetComponent<Collider>();
    }

    private void OnCollisionEnter(Collision other){
        Debug.Log("Colliding with " + other.gameObject.tag);
    }
}
