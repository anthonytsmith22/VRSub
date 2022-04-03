using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;
using Mirror;
public class ConvertSceneToMultiplayer : MonoBehaviour
{
    [SerializeField] GameObject NetworkManagerPrefab;
    [SerializeField] List<GameObject> SpawnPoints = new List<GameObject>();
    NetworkManager networkManager;

    #region Singleton
    private static ConvertSceneToMultiplayer instance;
    public static ConvertSceneToMultiplayer Instance { get { return instance; } }

    private void Awake(){
        if(instance != null && instance != this){
            Debug.LogWarning("More than one instance of ConvertSceneToMultiplayer found!");
            Destroy(this.gameObject);
        }
        else { instance = this; }
    }
    #endregion

    void Start(){
        ConvertScene();
    }

    void ConvertScene(){
        GameObject managerObject = Instantiate(NetworkManagerPrefab, Vector3.zero, Quaternion.identity);
        networkManager = managerObject.GetComponent<NetworkManager>();

        GameObject[] sceneObjects = UnityEngine.Object.FindObjectsOfType<GameObject>();
        int numObjects = sceneObjects.Length;
        int i;
        for(i = 0; i < numObjects; i++){
            GameObject currentObj = sceneObjects[i];
            if(currentObj.GetComponent<Valve.VR.InteractionSystem.Interactable>() != null 
                || currentObj.tag.Equals("ComponentFreeInteractable")){
                
                currentObj.AddComponent<InteractableRPCController>();
            }
        }

        AddSpawnPoints();
    }

    void AddSpawnPoints(){
        foreach(GameObject spawnPoint in SpawnPoints){
            if(spawnPoint.GetComponent<NetworkStartPosition>() == null){
                SpawnPoints.Remove(spawnPoint);
            }
        }
        networkManager.playerSpawnMethod = PlayerSpawnMethod.RoundRobin;
        networkManager.spawnPrefabs = SpawnPoints;
    }
}
