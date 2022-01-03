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


    [Command]
    public void CmdGrantAuthority(NetworkIdentity connPlayer){
        if(authorized == null){ 
            identity.AssignClientAuthority(connPlayer.connectionToServer);
            authorized = connPlayer;
            inUse = true;
            Debug.Log("Authority granted to " + connPlayer);
        }else{
            Debug.Log("Authority already granted to other player.");
        }
    }

    [Command]
    public void CmdRemoveAuthority(){
        identity.RemoveClientAuthority();
        authorized = null;
        inUse = false;
        Debug.Log("Authority removed.");
    }

    public bool CheckAuthority(NetworkIdentity conn){
        return conn.hasAuthority;
    }
}
