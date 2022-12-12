using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class TileScript : MonoBehaviour
{
    // ray gets shot out of particular point
    Ray ray;
    public InputActionProperty triggerButton;
    public InputActionProperty buttonA;
    public InputActionProperty buttonB;

    //position of what it hits
    RaycastHit hit;
    GameManager gameManager;
    private bool missileHit = false;
    Color32[] hitColor = new Color32[2];

    void Start()
    {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
        // hitColor[0] = gameObject.GetComponent<MeshRenderer>().material.color;
        // hitColor[1] = gameObject.GetComponent<MeshRenderer>().material.color;
    }

    void Update()
    {
           
        // get value of button push
        // can put bool for yes or no
        // can use float for how much the button is pressed
        float triggerValue = triggerButton.action.ReadValue<float>();
        // handAnimator.SetFloat("Trigger", triggerValue);
        if(triggerValue > 0.5f)
        {
            if(Physics.Raycast(ray, out hit))
            {
                if(hit.collider.gameObject.name == gameObject.name)
                {
                    if(missileHit == false)
                    {
                        gameManager.TileClicked(hit.collider.gameObject);
                    }
                }
            }
        }

    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Missile"))
        {
            missileHit = true;
        }
        else if (collision.gameObject.CompareTag("EnemyMissile"))
        {
            hitColor[0] = new Color32(38, 57, 76, 255);
            GetComponent<Renderer>().material.color = hitColor[0];
        }
                
    }

    public void SetTileColor(int index, Color32 color)
    {
        hitColor[index] = color;
    }

    public void SwitchColors(int colorIndex)
    {
        GetComponent<Renderer>().material.color = hitColor[colorIndex];
    }
}
