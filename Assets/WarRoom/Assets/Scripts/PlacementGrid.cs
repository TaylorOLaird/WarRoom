using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlacementGrid : MonoBehaviour
{
    // prefab for a grid element
    [SerializeField] public GameObject gridElementPrefab;
    private GameObject[,] gameGridSmall;
    private int height = 13;
    private int width = 13;
    private float GridSpaceSize = 2.5f;
    

    // Start is called before the first frame update
    void Start()
    {        
        CreateSmallGrid();
    }

    // Update is called once per frame
    public void CreateSmallGrid()
    {
        gameGridSmall = new GameObject[height, width];

        if(gridElementPrefab == null){
            Debug.LogError("ERROR: Grid Cell Prefab on the Game Grid Prefab is not assigned");
        }

        // create a 10 x 10 grid of grid elements
        for (int x = 0; x < 10; x++)
        {
            for (int y = 0; y < 10; y++)
            {
                // create a new grid element
                gameGridSmall[x,y] = Instantiate(gridElementPrefab, transform);
                // gameGridSmall[x,y].transform.parent = transform;
                gameGridSmall[x,y].transform.localPosition = new Vector3(x, 0.00001f, y);
                // scale the grid element to fit the grid
                // gameGridSmall[x,y].transform.localScale = new Vector3(GridSpaceSize/10, GridSpaceSize/10, GridSpaceSize/10);
                // gameGridSmall[x,y].transform.rotation = Quaternion.identity;

                if(gameGridSmall[x, y].GetComponent<GridCell>() == null){
                    Debug.LogError("No component Found");
                }

            }
        }
    }
    // function to make grid element prefab highlight on hover

}
