using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShipScript : MonoBehaviour
{
    //need to know where ship is located
    // clear variable while ship moves around
    List<GameObject> touchTiles = new List<GameObject>();
    public int xOffset = 0;
    public int zOffset = 0;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ClearTileList()
    {
        //whatever is added here will be cleared
        touchTiles.Clear();
    }

    public Vector3 GetOffsetVector(Vector3 tilePos)
    {
        return new Vector3(tilePos.x + xOffset, 2, tilePos.z + zOffset);
    }
}
