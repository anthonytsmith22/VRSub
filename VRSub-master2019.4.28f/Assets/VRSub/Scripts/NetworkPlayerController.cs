using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class NetworkPlayerController : NetworkBehaviour
{
    // GameObjects from LOCAL RIG
    [SerializeField] private GameObject localHead;
    [SerializeField] private GameObject localBodyCollider;
    [SerializeField] private GameObject localLeftHand;
    [SerializeField] private GameObject localRightHand;

    // Network GameObject Prefabs representing LOCAL RIG
    [SerializeField] private GameObject NetworkHead;
    [SerializeField] private GameObject NetworkBodyCollider;
    [SerializeField] private GameObject NetworkLeftHand;
    [SerializeField] private GameObject NetworkRightHand;

    [SerializeField] private GameObject SteamVRObjects;
    [SerializeField] private GameObject PlayerRig;
    private GameObject headlessPlayer;
    
    private void Start(){
        Debug.Log("Start of VR player");

        if(isLocalPlayer){
            //Disable network meshes 
            NetworkHead.transform.GetChild(0).GetComponent<MeshRenderer>().enabled = false;
            NetworkLeftHand.transform.GetChild(0).GetComponent<MeshRenderer>().enabled = false;
            NetworkRightHand.transform.GetChild(0).GetComponent<MeshRenderer>().enabled = false;
            
        }    
    }

    private void Update(){
        // If not local player, do not update network transforms
        if(!isLocalPlayer){
            return;
        }
        //Else, update network transforms from local rig to network rig
        OnStartLocalPlayer();
        NetworkPlayerPositionSync();
    }


    public override void OnStartLocalPlayer(){
        // If local rig objects not connected
        if(PlayerRig == null || SteamVRObjects == null){
            Debug.Log("PlayerRig or SteamVRObjects is null");
            PlayerRig = GameObject.Find("PlayerRig");
            SteamVRObjects = PlayerRig.transform.GetChild(0).gameObject.transform.Find("SteamVRObjects").gameObject;
        }
       
        if(localHead == null){
           Debug.Log("LocalHead is null");
           localHead = SteamVRObjects.transform.Find("VRCamera").gameObject;
        }
        
        if(localLeftHand == null){
            Debug.Log("LocalLeftHand is null");
            localLeftHand = SteamVRObjects.transform.Find("LeftHand").gameObject;
        }

        if(localRightHand == null){
            Debug.Log("LocalRightHand is null");
            localRightHand = SteamVRObjects.transform.Find("RightHand").gameObject;
        }

        if(localBodyCollider == null){
            Debug.Log("LocalBodyCollider is null");
            localBodyCollider = SteamVRObjects.transform.Find("BodyCollider").gameObject;
        }
    }
    
    public void NetworkPlayerPositionSync(){
        if(localHead == null){
            headlessPlayer = PlayerRig.transform.Find("NoSteamVRFallbackObjects").gameObject;

            localHead = headlessPlayer.transform.Find("FallbackObjects").gameObject;
            localLeftHand = headlessPlayer.transform.Find("FallbackHand").gameObject;
            localRightHand = headlessPlayer.transform.Find("FallbackHand").gameObject;
            Debug.Log("HEADLESS detected");
        }

        NetworkHead.transform.localRotation = localHead.transform.localRotation;
        NetworkHead.transform.position = localHead.transform.position;

        NetworkBodyCollider.transform.localRotation = localBodyCollider.transform.localRotation;
        NetworkBodyCollider.transform.position = localBodyCollider.transform.position;

        if(localLeftHand){
            NetworkLeftHand.transform.localRotation = localLeftHand.transform.localRotation;
            NetworkLeftHand.transform.position = localLeftHand.transform.position;
        }

        if(localRightHand){
            NetworkRightHand.transform.localRotation = localRightHand.transform.localRotation;
            NetworkRightHand.transform.position = localRightHand.transform.position;
        }
    }
}
