using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuController : MonoBehaviour
{
    [SerializeField] private GameObject Menu;
    [SerializeField] private GameObject Canvas;
    [SerializeField] private bool Toggled;
    private void Awake(){
        Toggled = false;
        if(Menu == null){
            Debug.LogWarning("No UI Found!");
            Menu = GameObject.Find("MenuUI");
        }

        if(Canvas == null){
            Debug.LogWarning("No Canvas Found!");
            Canvas = Menu.transform.GetChild(0).gameObject;
        }

        Menu.SetActive(true);
        Canvas.SetActive(Toggled);
    }
    private void Start(){
        InputController.Instance.OnMenuTriggerEnter += ToggleMenu;
    }

    public void ToggleMenu(){
        Toggled = !Toggled;
        Canvas.SetActive(Toggled);
    }

    
}
