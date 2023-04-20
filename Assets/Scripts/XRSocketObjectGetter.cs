using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class XRSocketObjectGetter : MonoBehaviour
{
    [SerializeField] XRSocketInteractor socketToWatch;

    public void DisableHeldObjct()
    {
        IXRSelectInteractable heldObject = GetHeldObject();

        // convert held object to MyGrabbableInteractable
        MyGrabbableInteractable heldObject = 
        
        // Set interaction layer of GrabbableInteractable to Nothing
        
    }

    IXRSelectInteractable GetHeldObject()
    {
        return socketToWatch.GetOldestInteractableSelected();
    }


}
