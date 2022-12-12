using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class AttackScript : MonoBehaviour
{

    public XRRayInteractor xrRayInteractor;
    public string collidingObjectTag;

    public GameObject bomb;
    //spawn point for the bomb
    public Transform spawnPoint;
    //speed the bomb will fall
    public float bombDropSpeed;
    // Start is called before the first frame update
    void Start()
    {
        XRGrabInteractable grabbable = GetComponent<XRGrabInteractable>();
        grabbable.onActivate.AddListener(LaunchBomb);
    }

    private void LaunchBomb(XRBaseInteractor interactor)
    {
        //create a new bomb
        GameObject newBomb = Instantiate(bomb);
        //set position
        newBomb.transform.position = spawnPoint.position;
        //add force to the bomb
        newBomb.GetComponent<Rigidbody>().AddForce(spawnPoint.forward * bombDropSpeed);
        Destroy(newBomb, 5);
    }

    // Update is called once per frame
    void Update()
    {

    }
}
