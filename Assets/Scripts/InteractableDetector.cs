using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.XR.Interaction.Toolkit; // for interactors

public class InteractableDetector : MonoBehaviour
{
    public string acceptedMoleculeTag;
    [SerializeField] ExamParams examParams;
    [SerializeField] UnityEvent onRejected;
    [SerializeField] UnityEvent onAccepted;
    public bool isLipidDetector = false;

    private void OnCollisionEnter(Collision collision)
    {
        GameObject collidedObject = collision.gameObject;

        // Is not a molecule at all
        if (collidedObject.transform.tag == "Ignore") { return; }
        if (collidedObject.transform.tag == "Player") { return; }

        // Is not correct molecule
        if (collidedObject.transform.tag != acceptedMoleculeTag)
        {
            dropAndResetGrabbable(collision);
            onRejected.Invoke();
            return;
        }

        // The exam is going on
        if (examParams.isExam)
        {
            // is not exam molecule
            if (collidedObject.transform.root.gameObject.tag != examParams.currAcceptedMoleculeTag)
            {
                dropAndResetGrabbable(collision);
                onRejected.Invoke();
                return;
            }
        }

        onAccepted.Invoke();
        if(collidedObject.transform.tag == "Lipid")
        {
            dropAndResetGrabbable(collision);
            GameObject objectGrabbed = collision.gameObject;
            objectGrabbed.SetActive(false);
        }
    }


    // Helpers
    private void dropAndResetGrabbable(Collision collision)
    {
        GameObject objectGrabbed = collision.gameObject.transform.root.gameObject;

        // checks for nulls and setting up variables
        if (objectGrabbed.GetComponent<MyGrabbableInteractable>() == null)
        {
            return;
        };
        XRBaseInteractor hand = objectGrabbed.GetComponent<MyGrabbableInteractable>().selectingInteractor;

        hand.allowSelect = false;
        hand.gameObject.SetActive(false);

        objectGrabbed.GetComponent<MyGrabbableInteractable>().resetPosition();
        objectGrabbed.GetComponent<MyGrabbableInteractable>().enabled = true;

        hand.gameObject.SetActive(true);
        hand.allowSelect = true;
    }
    /*
    public string moleculeToString(Molecules mol)
    {
        if (mol == Molecules.ATP) { return "ATP"; }
        if (mol == Molecules.FUNNEL) { return "Funnel"; }
        if (mol == Molecules.GATED) { return "Gated"; }
        if (mol == Molecules.LIPID) { return "Lipid"; }
        if (mol == Molecules.RECEPTOR) { return "Receptor"; }

        Debug.LogError("No current molecule is set as exam molecule!");
        return "";
    }

    private Molecules stringToMolecule(string mol)
    {
        if (mol == "ATP") { return Molecules.ATP; }
        if (mol == "Funnel") { return Molecules.FUNNEL; }
        if (mol == "Gated") { return Molecules.GATED; }
        if (mol == "Lipid") { return Molecules.LIPID; }
        if (mol == "Receptor") { return Molecules.RECEPTOR; }

        Debug.LogError("No current molecule is set as exam molecule!");

        return Molecules.NONE;
    }
    */
}
