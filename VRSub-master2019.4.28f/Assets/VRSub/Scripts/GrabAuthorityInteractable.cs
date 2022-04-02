using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;
using Mirror;

public class GrabAuthorityInteractable : NetworkBehaviour
{
    
    public NetworkIdentity authorized;
    
    public bool inUse;
    [SerializeField] public NetworkIdentity identity;

    private void Start(){
        identity = GetComponent<NetworkIdentity>();
        inUse = false;
    }

    public void RemoveAuthority(){
        authorized = null;
        inUse = false;
        Debug.Log("Authority removed.");
    }

}
