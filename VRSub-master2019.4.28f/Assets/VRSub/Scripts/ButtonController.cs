using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class ButtonController : MonoBehaviour
{
    [SerializeField] private GameObject Menu;
    private MenuController controller;

    private void Awake(){
        if(Menu == null){
            Debug.Log("No Menu Controller found!");
            Menu = GameObject.Find("MenuUI");
        }
        controller = Menu.GetComponent<MenuController>();
        if(controller == null){
            Debug.LogWarning("Menu has no MenuController");
        }
    }
    public void ToggleRenderAlias(){
        //GameManager.Instance.ToggleMeshAliasRenderer();
        VRSubEvents.Instance.ToggleRenderModeEnter();
    }

    
}
