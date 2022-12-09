using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreateShip : MonoBehaviour
{

    public GameObject shipPrefab;

    
    // Update is called once per frame
    public void onClick()
    {
        Instantiate(shipPrefab, transform.position, Quaternion.identity);

    }
}
