using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public GameObject[] ships;
    public GameObject shipHolder;

    private bool setupCompete = false;
    public bool playerTurn = true;
    private int shipIndex = 0;
    private ShipScript shipScript;
    // Start is called before the first frame update
    void Start()
    {
        shipScript = ships[shipIndex].GetComponent<ShipScript>();
        GameObject[] shipsInGame;
        //get the children for the ship holder and store them in shipsInGame
        shipsInGame = new GameObject[shipHolder.transform.childCount];

        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void TileClicked(GameObject tile)
    {
        if(setupCompete && playerTurn){
            // Do something
        }else if(setupCompete){
            PlaceShip(tile);
        }
    }

    private void PlaceShip(GameObject tile)
    {
        // Do something
        shipScript = ships[shipIndex].GetComponent<ShipScript>();
        shipScript.ClearTileList();
        Vector3 newVec = shipScript.GetOffsetVector(tile.transform.position);
        //change ship position
        ships[shipIndex].transform.localPosition = newVec;
    }
}
