using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class XRSocketObjectGetter : MonoBehaviour
{
    [SerializeField] XRSocketInteractor socketToWatch;

    private void Start()
    {
        if(socketToWatch == null)
        {
            socketToWatch = gameObject.GetComponent<XRSocketInteractor>();
        }
    }
    public void DisableHeldObjct()
    {
        IXRSelectInteractable heldObject = GetHeldObject();
        if (heldObject.transform.root.tag == "Ignore") { return; }

        // convert held object to MyGrabbableInteractable
        MyGrabbableInteractable molecule = heldObject.transform.root.gameObject.GetComponent<MyGrabbableInteractable>();
        if (!molecule) { return; }

        StartCoroutine(WaitDisableHeldObjct(molecule));
    }

    // Helpers
    IEnumerator WaitDisableHeldObjct(MyGrabbableInteractable molecule)
    {
        // wait for a frame
        yield return new WaitForSeconds(0.1f);

        // Set interaction layer of GrabbableInteractable to Nothing
        molecule.interactionLayers = InteractionLayerMask.GetMask("Nothing");
    }

    IXRSelectInteractable GetHeldObject()
    {
        return socketToWatch.GetOldestInteractableSelected();
    }
}
