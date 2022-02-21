using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class InputController : MonoBehaviour
{
    #region Singleton
    private static InputController instance;
    public static InputController Instance { get { return instance; } }

    private void Awake(){
        if(instance != null && instance != this){
            Debug.LogWarning("More than one instance of InputController found!");
            Destroy(this.gameObject);
        }else{ instance = this; }
    }
    #endregion
    private KeyCode ESCAPE = KeyCode.Escape;

    private void Update(){
        if(Input.GetKeyDown(ESCAPE)){
            Debug.Log("ESCAPE");
            MenuTriggerEnter();
        }
    }

    #region Input Events
    public event Action OnMenuTriggerEnter;
    public void MenuTriggerEnter(){
        if(OnMenuTriggerEnter != null){
            OnMenuTriggerEnter();
        }
    }
    #endregion
}
