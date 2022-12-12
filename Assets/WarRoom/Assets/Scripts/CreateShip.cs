using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreateShip : MonoBehaviour
{
    public GameObject shipPrefab;

    public void Create()
    {
        Instantiate(shipPrefab, transform.position, Quaternion.identity); 
    }

}
