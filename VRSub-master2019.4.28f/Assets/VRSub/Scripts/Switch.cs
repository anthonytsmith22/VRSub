using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Switch : MonoBehaviour
{
    [SerializeField] private bool On;
    private Light light;
    // Start is called before the first frame update
    void Start()
    {
        light = GetComponent<Light>();
        light.enabled = On;
    }

    public void Toggle(){
        On = !On;
        light.enabled = On;
        Debug.Log("toggled?");
    }

}
