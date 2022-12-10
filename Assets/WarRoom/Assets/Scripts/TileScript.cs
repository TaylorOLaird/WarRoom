using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileScript : MonoBehaviour
{
    GameManager gameManager;
    Ray ray;
    //we can see what we hit
    RaycastHit hit;
    private bool missleHit = false;
    Color32[] hitColor = new Color32[2];

    // Start is called before the first frame update
    void Start()
    {
        //each tile will grasb the game manager
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();

            
    }

    // Update is called once per frame
    public void Placement()
    {
        // get position of ray from camera to mouse
        ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        
        if(Physics.Raycast(ray, out hit)){
            if(Input.GetMouseButtonDown(0) && hit.collider.gameObject.name == gameObject.name){

                

                // //if the tile is not occupied
                // if(!gameManager.gridArray[hit.transform.GetComponent<GridCell>().GetPosition().x, hit.transform.GetComponent<GridCell>().GetPosition().y].isOccupied){
                //     //place the object
                //     gameManager.gridArray[hit.transform.GetComponent<GridCell>().GetPosition().x, hit.transform.GetComponent<GridCell>().GetPosition().y].objectInThisSpace = Instantiate(gameManager.objectToPlace, hit.transform.position, Quaternion.identity);
                //     //set the tile to occupied
                //     gameManager.gridArray[hit.transform.GetComponent<GridCell>().GetPosition().x, hit.transform.GetComponent<GridCell>().GetPosition().y].isOccupied = true;
                //     //set the tile to the color of the object
                //     hitColor[0] = gameManager.objectToPlace.GetComponent<Renderer>().material.color;
                //     hitColor[1] = gameManager.objectToPlace.GetComponent<Renderer>().material.color;
                //     hitColor[1].a = 255;
                //     hit.transform.GetComponent<MeshRenderer>().materials[0].color = hitColor[0];
                //     hit.transform.GetComponent<MeshRenderer>().materials[1].color = hitColor[1];
                // }

            }
        }
        
    }
}
