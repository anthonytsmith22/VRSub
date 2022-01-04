using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IgnoreCollisions : MonoBehaviour
{
    [SerializeField] CharacterController Source;
    [SerializeField] List<GameObject> Targets;
    private List<SphereCollider> Colliders = new List<SphereCollider>();
    private void Start(){
        if(Source == null){
            Source = GetComponent<CharacterController>();
        } 
        SphereCollider collider;
        for(int i = 0; i < Targets.Count; i++){
            collider = Targets[i].GetComponentInChildren<SphereCollider>();
            if(collider != null){
                Colliders.Add(collider);
            }else{
                Debug.LogWarning("No collider found!");
            }
        }
        if(Source != null){
            if(Colliders.Count > 0){
                for(int j = 0; j < Colliders.Count; j++){
                    Physics.IgnoreCollision(Source, Colliders[j]);
                }
            }else{
                Debug.LogWarning("No colliders present.");
            }
        }
        else{
            Debug.LogWarning("No Character controller found.");
        }
    }
}
