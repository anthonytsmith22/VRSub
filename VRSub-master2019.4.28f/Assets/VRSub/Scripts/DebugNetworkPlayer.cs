using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;


public class DebugNetworkPlayer : NetworkBehaviour
{
#if UNITY_EDITOR
    [SerializeField] private Transform NetworkPlayer;
    [SerializeField] private Transform HeadAlias;
    [SerializeField] private Transform LeftHandAlias;
    [SerializeField] private Transform RightHandAlias;
    [SerializeField] private bool HeadAliasRendered;
    [SerializeField] private bool LeftHandAliasRendered;
    [SerializeField] private bool RightHandAliasRendered;

    private Transform HeadSphere;
    private Transform LeftHandSphere;
    private Transform RightHandSphere;

    private void Start(){
        NetworkPlayer = GetComponent<Transform>();
    }

    private void Update(){
        GetComponents();
        GetValues();
    }

    private void GetComponents(){
        if(HeadAlias == null){
            HeadAlias = NetworkPlayer.Find("NetworkHead");
        }
        if(LeftHandAlias == null){
            LeftHandAlias = NetworkPlayer.Find("NetworkLeftHand");
        }
        if(RightHandAlias == null){
            RightHandAlias = NetworkPlayer.Find("NetworkRightHand");
        }

        if(HeadAlias){
            HeadSphere = HeadAlias.GetChild(0).transform;
        }
        if(LeftHandAlias){
            LeftHandSphere = LeftHandAlias.GetChild(0).transform;
        }
        if(RightHandAlias){
            RightHandSphere = RightHandAlias.GetChild(0).transform;
        }
    }

    private void GetValues(){
        if(HeadSphere){
            HeadAliasRendered = HeadSphere.GetComponent<MeshRenderer>().enabled;
        }
        if(LeftHandSphere){
            LeftHandAliasRendered = LeftHandSphere.GetComponent<MeshRenderer>().enabled;
        }
        if(RightHandSphere){
            RightHandAliasRendered = RightHandSphere.GetComponent<MeshRenderer>().enabled;
        }
    }
#endif
}
