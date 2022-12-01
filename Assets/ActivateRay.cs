using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.InputSystem;

public class ActivateRay : MonoBehaviour
{
    public GameObject leftRay;
    public GameObject rightRay;

    public InputActionProperty leftActivate;
    public InputActionProperty rightActivate;
    
    public InputActionProperty leftCancel;
    public InputActionProperty rightCancel;
    
    // // Start is called before the first frame update
    // void Start()
    // {
        
    // }

    // Update is called once per frame
    void Update()
    {
        leftRay.SetActive(leftCancel.action.ReadValue<float>() == 0 && leftActivate.action.ReadValue<float>() > 0.1f);
        rightRay.SetActive(rightCancel.action.ReadValue<float>() == 0 && rightActivate.action.ReadValue<float>() > 0.1f);
    }
}
