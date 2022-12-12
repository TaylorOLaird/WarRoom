using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputManager : MonoBehaviour
{
    //get reference to game grid
    Game_Grid gameGrid;
    [SerializeField] private LayerMask whatIsAGridLayer;

    // Start is called before the first frame update
    void Start()
    {
        gameGrid = FindObjectOfType<Game_Grid>();
    }

    // Update is called once per frame
    void Update()
    {
        GridCell cellRayIsOver = isRayOverAGridSpace();
        if(cellRayIsOver != null)
        {
            if(Input.GetMouseButtonDown(0)){
                cellRayIsOver.GetComponentInChildren<SpriteRenderer>().material.color = Color.green;

            }
        }
    }

    // returns the grid cell if tghe mouse is over it or null if not

    private GridCell isRayOverAGridSpace()
    {
        //ray cast to camera through mouse position
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

        if(Physics.Raycast(ray, out RaycastHit hitInfo, 100F, whatIsAGridLayer))
        {
            return hitInfo.transform.GetComponent<GridCell>();
        }
        else {
            return null;
        }
    }
}
