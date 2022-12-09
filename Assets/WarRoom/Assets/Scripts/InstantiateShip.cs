using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InstantiateShip : MonoBehaviour
{

    public GameObject shipPrefab;

    // Update is called once per frame
    void Click()
    {
        // object position, rotation
        Instantiate(shipPrefab, transform.position, Quaternion.identity);
    }
}
