using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class XROffsetInteractable : XRGrabInteractable
{
    // Start is called before the first frame update
    void Start()
    {
        if(!attachTransform)
        {
            GameObject attachPoint = new GameObject("Offset Grab Pivot");
            // false means add local position at 0, 0, 0
            attachPoint.transform.SetParent(transform, false);
        }
    }

    protected override void OnSelectEntered(SelectEnterEventArgs args)
    {
        // set the offset as the new attach point
        attachTransform.position = args.interactor.transform.position;
        attachTransform.rotation = args.interactor.transform.rotation;

        base.OnSelectEntered(args);
        // get the offset between the attach point and the object
        // Vector3 offset = attachTransform.position - args.interactor.transform.position;
    }
}
