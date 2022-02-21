using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public bool ToggleRender { get; private set; }
    [SerializeField] ButtonController buttonController;

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
        OnEnable();
    }

    public void ToggleMeshAliasRenderer(){
        ToggleRender = !ToggleRender;
        VRSubEvents.Instance.ToggleRenderTrigger();
    }

    private void OnEnable(){
        VRSubEvents.Instance.OnToggleRenderModeEnter += ToggleMeshAliasRenderer;
    }
    private void OnDisable(){
        VRSubEvents.Instance.OnToggleRenderModeEnter -= ToggleMeshAliasRenderer;
    }

    private void OnDestroy(){
        OnDisable();
    }
}
