using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit; // for interactors

public class MyGrabbableInteractable : XRGrabInteractable
{
    public Vector3 spawnPosition;

    protected void Start()
    {
        spawnPosition = transform.position;
    }

    public void resetPosition()
    {
        transform.position = spawnPosition;
    }
}
