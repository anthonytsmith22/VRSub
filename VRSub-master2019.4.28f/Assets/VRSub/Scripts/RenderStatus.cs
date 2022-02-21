using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RenderStatus : MonoBehaviour
{
    [SerializeField] private bool status;
    void Update()
    {
        status = GameManager.Instance.ToggleRender;
    }
}
