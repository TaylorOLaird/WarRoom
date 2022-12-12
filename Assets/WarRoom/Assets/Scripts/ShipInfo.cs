using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShipInfo : MonoBehaviour
{
    public int health;
    private bool isDestroyed = false;
    public bool isEnemyShip;
    GameObject ship;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(health == 0 && !isDestroyed){
            isDestroyed = true;
            Destroy(ship);
        }
    }
}
