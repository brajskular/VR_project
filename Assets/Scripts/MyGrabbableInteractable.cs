using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit; // for interactors

public class MyGrabbableInteractable : XRGrabInteractable
{
    public Vector3 spawnPosition;
    bool isExam;

    protected void Start()
    {
        spawnPosition = transform.position;
        isExam = true;
    }

    public void resetPosition()
    {
        transform.position = spawnPosition;
    }
}
