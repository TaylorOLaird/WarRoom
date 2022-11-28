using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GridCell : MonoBehaviour
{

    private int posX;
    private int posY;

    //saves a reference to the gameobject that gets placed on this cell
    public GameObject objectInThisSpace = null;

    // saves if the grid space is occupied
    public bool isOccupied =  false;

    //set position pof the grid space on the grid
    
    // Start is called before the first frame update
    public void SetPosition(int X, int Y)
    {
        posX = X;
        posY = Y;
    }

    //  get the position of this grid space on grid
    public Vector2 GetPosition()
    {
        return new Vector2Int(posX, posY);
    }
}
