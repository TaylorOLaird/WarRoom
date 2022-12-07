using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapGenerator : MonoBehaviour
{
    public Transform tilePrefab;
    public Vector2 mapSize;
    private Vector3 movement;

    void Start()
    {
        GenerateMap();
    }

    public void GenerateMap()
    {
        for (int x = 0; x < mapSize.x; x++)
        {
            for (int y = 0; y < mapSize.y; y++)
            {
                // find leftmost edge of map. center of tile will be at -mapsize.x + 
                // 0.5f to put corenr at that pos + 0.5f X to move with each loop
                Vector3 tilePosition = new Vector3(-mapSize.x / 2 + 0.5f + x, 1.87035f, -mapSize.y / 2 + 0.5f + y);
                Transform newTile = Instantiate(tilePrefab, tilePosition, Quaternion.Euler(Vector3.right * 90)) as Transform;
            }
        }
    }
}
