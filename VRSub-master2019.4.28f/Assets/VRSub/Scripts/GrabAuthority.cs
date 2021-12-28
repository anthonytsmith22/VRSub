using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;
using Mirror;

public class GrabAuthority : NetworkBehaviour
{
    [SerializeField] private GameObject PlayerRig;
    [SerializeField] private SteamVR_Action_Boolean GrabEvent;
    [SerializeField] private SteamVR_Input_Sources InputSource;

    private NetworkTransform Focus;

    private void Start(){
        if(PlayerRig == null){
            PlayerRig = GameObject.Find("PlayerRig");
        }
        OnEnable();        
    }

    private void RequestAuthority(SteamVR_Action_Boolean fromAction, SteamVR_Input_Sources fromSource){
        if(Focus.clientAuthority.Equals(true)){
            Debug.Log("Has Client Authority");
        }else{
            Debug.Log("Does not have client authority");
        }
    }

    private void ReleaseAuthority(SteamVR_Action_Boolean fromAction, SteamVR_Input_Sources fromSource){
        Focus.clientAuthority.Equals(false);
    }

    private void OnDestroy(){
        GrabEvent.RemoveAllListeners(InputSource);
    }

    private void OnDisable(){
        OnDestroy();
    }

    private void OnEnable(){
        GrabEvent.AddOnStateDownListener(RequestAuthority, InputSource);
        GrabEvent.AddOnStateUpListener(ReleaseAuthority, InputSource);
    }
}
