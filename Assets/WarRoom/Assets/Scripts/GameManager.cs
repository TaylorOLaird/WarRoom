using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    //send in array of ships
    public GameObject[] ships;
    private bool setupComplete = false;
    private bool playerTurn = true;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void TileClicked(GameObject tile){

        if(setupComplete && playerTurn){
            // drop a missle
        }else if(!setupComplete){
            PlaceShip(tile);
        }

    }

    private void PlaceShip(GameObject tile){

    }
}
