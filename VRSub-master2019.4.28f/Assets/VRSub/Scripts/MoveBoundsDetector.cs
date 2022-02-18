using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveBoundsDetector : MonoBehaviour
{
    [SerializeField] private SimpleMovement movementController;

    private void OnTriggerEnter(Collider other){
        Debug.Log("Check bounds");
        if(other.tag.Equals("MoveArea")){
            Transform Container = other.GetComponent<Transform>();
            movementController.SetMoveBounds(Container);
        }
    }
}
