//This file syncs the handle movement with the lid so that the lid will move up as the handle is being moved up.

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;

public class Dishwasher : MonoBehaviour
{
    // GOES ON DISHWASHER HINGE
    [SerializeField] Valve.VR.InteractionSystem.LinearMapping Mapping;
    Transform DishwasherLid;
    Vector3 startPos;
    private float lidOffset = 0.5f;
    [SerializeField] float mappingValue;
    void Awake(){
        Mapping = GetComponent<Valve.VR.InteractionSystem.LinearMapping>();
        DishwasherLid = transform.parent.parent;
        startPos = DishwasherLid.position;      
    }

    private void Update(){
        mappingValue = 1 - Mapping.value;
        SyncLidWithHandle();
    }

    private void SyncLidWithHandle(){ 
        float newOffset = Mathf.Clamp(lidOffset * mappingValue, 0.0f, lidOffset);
        Vector3 newLidPos = new Vector3(startPos.x, startPos.y+newOffset, startPos.z);
        DishwasherLid.position = newLidPos;
    }
}
