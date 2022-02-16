using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionIgnorer : MonoBehaviour
{
    [SerializeField] private List<Collider> Sources = new List<Collider>();
    [SerializeField] private List<Collider> Targets = new List<Collider>();
    
    private void Awake(){
        int SourcesSize = Sources.Count;
        int TargetsSize = Targets.Count;
        int i, j;
        for(i = 0; i < SourcesSize; i++){
            for(j = 0; j < TargetsSize; j++){
                Physics.IgnoreCollision(Sources[i], Targets[i]);
            }
        }
    }
}
