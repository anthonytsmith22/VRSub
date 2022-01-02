using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;
using Mirror;

public class GrabAuthorityInteractable : NetworkBehaviour
{
    
    [SerializeField] protected NetworkIdentity authorized;
    private NetworkIdentity identity;

    private void Start(){
        identity = GetComponent<NetworkIdentity>();
    }


    // [Command]
    // protected void CmdGrantAuthority(NetworkIdentity connPlayer){
    //     if(authorized == null){ 
    //         identity.AssignClientAuthority(connPlayer.connectionToServer);
    //         authorized = connPlayer;
    //         Debug.Log("Authority granted to " + connPlayer);
    //     }else{
    //         Debug.Log("Authority already granted to other player.");
    //     }
    // }

    [Command]
    protected void CmdRemoveAuthority(){
        identity.RemoveClientAuthority();
        authorized = null;
        Debug.Log("Authority removed.");
    }

    protected bool CheckAuthority(NetworkIdentity conn){
        return conn.hasAuthority;
    }
}
