using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public bool ToggleRender { get; private set; }

    #region Singleton
    private static GameManager instance;
    public static GameManager Instance { get { return instance; } }

    private void Awake(){
        if(instance != null && instance != this){
            Debug.LogWarning("More than one instance of GameManager found!");
            Destroy(this.gameObject);
        }
        else { instance = this; }
    }
    #endregion

    private void Start(){
        ToggleRender = true;
    }

    public void ToggleMeshAliasRenderer(){
        ToggleRender = !ToggleRender;
    }
}
