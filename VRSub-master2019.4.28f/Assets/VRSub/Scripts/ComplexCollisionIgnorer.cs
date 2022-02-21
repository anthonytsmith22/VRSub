using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ComplexCollisionIgnorer : MonoBehaviour
{
    [SerializeField] private List<GameObject> SourceObjects = new List<GameObject>();
    [SerializeField] private List<Collider> SimpleSources = new List<Collider>();
    [SerializeField] private List<GameObject> TargetObjects = new List<GameObject>(); 
    private List<List<Collider>> SourceColliders = new List<List<Collider>>();
    private List<List<Collider>> TargetColliders = new List<List<Collider>>();

    private void Awake(){
        Debug.Log("Check 0");
        GetColliders(SourceObjects, SourceColliders);
        Debug.Log("Check 1");
        GetColliders(TargetObjects, TargetColliders);
        Debug.Log("Check 2");
        IgnoreComplexCollisions();
        Debug.Log("Check 3");
    }

    private void GetColliders(List<GameObject> list, List<List<Collider>> target){        
        int numObjects = list.Count;
        int i;
        for(i = 0; i < numObjects; i++){
            Collider[] colliders = list[i].GetComponentsInChildren<Collider>();
            Debug.Log(colliders.Length);
            target.Add(new List<Collider>(colliders));
        }
    }

    private void IgnoreComplexCollisions(){
        int numSources = SourceColliders.Count;
        int numTargets = TargetColliders.Count;
        int numSourceColliders, numTargetColliders;;
        int i, j, k, l;
        if(SourceColliders.Count > 0){
            for(i = 0; i < numSources; i++){ // Go through sources
                numSourceColliders = SourceColliders[i].Count;
                for(j = 0; j < numSourceColliders; j++){ // Go through each collider in source
                    for(k = 0; k < numTargets; k++){ // Go through each target
                        numTargetColliders = TargetColliders[k].Count;
                        for(l = 0; l < numTargetColliders; l++){ // Go through each collider in target
                            Physics.IgnoreCollision(SourceColliders[i][j], TargetColliders[k][l]);
                            Debug.Log(SourceColliders[i][j].name + " " + TargetColliders[k][l].name);
                        }
                    }
                }
            }
        }else{
            numSources = SimpleSources.Count;
            for(i = 0; i < numSources; i++){
                for(j = 0; j < numTargets; j++){
                    numTargetColliders = TargetColliders[j].Count;
                    for(k = 0; k < numTargetColliders; k++){
                        Physics.IgnoreCollision(SimpleSources[i], TargetColliders[j][k]);
                    }
                }
            }
        }
    }
}
