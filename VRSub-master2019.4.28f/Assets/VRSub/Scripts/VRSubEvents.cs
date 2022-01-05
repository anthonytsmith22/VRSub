using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class VRSubEvents : MonoBehaviour
{
    
    #region Singleton
    private static VRSubEvents instance;
    public static VRSubEvents Instance { get { return instance; } }
    private void Awake(){
        if(instance != null && instance != this){
            Debug.LogWarning("More than one instance of VRSubEvents found!");
            Destroy(this.gameObject);
        }
        else{
            instance = this;
        }
    }
    #endregion

    // When toggle render button is pressed, trigger this event
    public event Action OnToggleRenderModeEnter;
    public void ToggleRenderModeEnter(){
        if(OnToggleRenderModeEnter != null){
            OnToggleRenderModeEnter();
        }
    }

    // Once Toggle Render event has been called, call this event to apply toggled render mode
    public event Action OnToggleRenderTrigger;
    public void ToggleRenderTrigger(){
        if(OnToggleRenderTrigger != null){
            OnToggleRenderTrigger();
        }
    }
}
