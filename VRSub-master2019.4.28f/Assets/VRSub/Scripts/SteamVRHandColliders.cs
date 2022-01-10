using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;

public class SteamVRHandColliders : MonoBehaviour
{
    [SerializeField] GameObject SteamVRObjects;
    private GameObject LeftHand;
    private GameObject RightHand;
    private Valve.VR.InteractionSystem.Hand LeftHandScript;
    private Valve.VR.InteractionSystem.Hand RightHandScript;
    

    private void Start(){
        if(SteamVRObjects == null){
            SteamVRObjects = GameObject.Find("PlayerRig").transform.Find("SteamVRObjects").gameObject;
        }

    }

    private void CheckHands(){
        if(LeftHand == null || LeftHandScript == null){
            LeftHand = SteamVRObjects.transform.Find("LeftHand").gameObject;
            LeftHandScript = LeftHand.GetComponent<Valve.VR.InteractionSystem.Hand>();
        }
        if(RightHand == null || RightHandScript == null){
            RightHand = SteamVRObjects.transform.Find("RightHand").gameObject;
            RightHandScript = LeftHand.GetComponent<Valve.VR.InteractionSystem.Hand>();
        }
    }
}
