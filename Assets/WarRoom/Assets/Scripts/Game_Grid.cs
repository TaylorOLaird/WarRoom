using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Game_Grid : MonoBehaviour
{

    private int height = 12;
    private int width = 12;
    private float gridSpaceSize = 2.5f;

    [SerializeField] private GameObject gridCellPrefab;
    private GameObject[,] gameGrid;
    

    // Start is called before the first frame update
    void Start()
    {
        CreateGrid();
    }

    // Update is called once per frame
    private void CreateGrid()
    {

        gameGrid = new GameObject[height, width];
        // GridCell gc;
        if(gridCellPrefab == null){
            Debug.LogError("ERROR: Grid Cell Prefab on the Game Grid Prefab is not assigned");
        }

        // make a grid
        for (int y = 0; y < height; y++){
            for (int x = 0; x < width; x++){
                //create a new gridspace object for each cell (X, Z, Y)
                gameGrid[x, y] = Instantiate(gridCellPrefab, new Vector3(x * gridSpaceSize/10 - 1.691853f, 0 - 0.6086f, y * gridSpaceSize/10 - 1.377926f), Quaternion.Euler(new Vector3(0, 0, 0)));
                // every cell has its own location that we can call if needed
                gameGrid[x, y].GetComponent<GridCell>().SetPosition(x, y);
                gameGrid[x, y].transform.parent = transform;
                gameGrid[x, y].gameObject.name = "Grid Space ( X: " + (x * gridSpaceSize/10).ToString() + " , Y: " + y.ToString() + ")";
            }
        }
    }

    // get the grid position from the world position
    public Vector2Int GetGridPosFromWorld(Vector3 worldPosition)
    {
        //gets the next lowest integer
        int x = Mathf.FloorToInt(worldPosition.x / gridSpaceSize / 10);
        int y = Mathf.FloorToInt(worldPosition.z / gridSpaceSize / 10);

    //cant go above the width or height
        x = Mathf.Clamp(x, 0, width);
        y = Mathf.Clamp(x, 0, height);

        return new Vector2Int(x, y);
        
    } 

    // gets the world position relative to grid position
    public Vector3 GetWorldPosFromGridPos(Vector2Int gridPos)
    {
        float x = gridPos.x * gridSpaceSize / 10;
        float y = gridPos.y * gridSpaceSize / 10;
        
        return new Vector3(x, 0 , y);
    }


}
