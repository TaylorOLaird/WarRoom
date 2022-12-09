using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InstantiateShip : MonoBehaviour
{

    public GameObject shipPrefab;

    // Update is called once per frame
    void Update()
    {
        // object position, rotation
        Instantiate(shipPrefab, transform.position, Quaterion.identity);
    }
}
