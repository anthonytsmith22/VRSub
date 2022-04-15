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
    [SerializeField] SkinnedMeshRenderer LeftHandMesh;
    [SerializeField] SkinnedMeshRenderer RightHandHesh;

    [SerializeField] private GameObject SteamVRObjects;
    [SerializeField] private GameObject PlayerRig;
    private GameObject headlessPlayer;
    private Collider[] LocalVRLeftHandColliders;
    private Collider[] LocalVRRightHandColliders;
    private Collider[] NetworkVRLeftHandColliders;
    private Collider[] NetworkVRRightHandColliders;
    
    private void Awake(){

    }
    private void Start(){
        Debug.Log("Start of VR player");

        if(isLocalPlayer){
            Vector3 newScale = new Vector3(0.1f, 0.1f, 0.1f);
            GameObject networkHeadAlias = NetworkHead.transform.GetChild(0).gameObject;
            GameObject networkLeftHandAlias = NetworkLeftHand.transform.GetChild(0).gameObject;
            GameObject networkRightHandAlias = NetworkRightHand.transform.GetChild(0).gameObject;

            networkHeadAlias.transform.localScale = newScale;
            networkLeftHandAlias.transform.localScale = newScale;
            networkRightHandAlias.transform.localScale = newScale;
            //Disable or Enable network meshes based on GameManager.Instance.ToggleRender 
            ToggleMeshAliasRender();
            networkHeadAlias.GetComponent<SphereCollider>().enabled = false;
            LeftHandMesh.enabled = false;
            RightHandHesh.enabled = false;
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

    private void ToggleMeshAliasRender(){
        if(!isLocalPlayer){ return; }
        GameObject networkHeadAlias = NetworkHead.transform.GetChild(0).gameObject;
        GameObject networkLeftHandAlias = NetworkLeftHand.transform.GetChild(0).gameObject;
        GameObject networkRightHandAlias = NetworkRightHand.transform.GetChild(0).gameObject;
        networkHeadAlias.GetComponent<MeshRenderer>().enabled = false;
        networkLeftHandAlias.GetComponent<MeshRenderer>().enabled = false;
        networkRightHandAlias.GetComponent<MeshRenderer>().enabled = false;
    }

    public override void OnStartLocalPlayer(){
        // If local rig objects not connected
        if(PlayerRig == null || SteamVRObjects == null){
            Debug.Log("PlayerRig or SteamVRObjects is null");
            PlayerRig = GameObject.Find("PlayerRig2");
            SteamVRObjects = GameObject.Find("SteamVRObjects").gameObject;
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
