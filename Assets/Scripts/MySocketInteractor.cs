using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.XR.Interaction.Toolkit; // for interactors

public class MySocketInteractor : XRSocketInteractor
{
    [SerializeField] List<string> acceptableTags;
    public UnityEvent OnRejected;


    static readonly Dictionary<IXRInteractable, float> s_InteractableDistanceSqrMap = new Dictionary<IXRInteractable, float>();
    static readonly Comparison<IXRInteractable> s_InteractableDistanceComparison = InteractableDistanceComparison;

    public override void GetValidTargets(List<IXRInteractable> targets)
    {
        // Get all valid interactables and sort
        SortByDistanceToInteractor(this, unsortedValidTargets, targets);

        // Go through valid interactables
        // for each interactables
        for (int i = 0; i < unsortedValidTargets.Count; ++i)
        {
            IXRInteractable interactable = unsortedValidTargets[i];
            if (interactable.transform.root.tag == "Ignore") { continue; }

            XRBaseInteractor hand = interactable.transform.root.gameObject.GetComponent<MyGrabbableInteractable>().selectingInteractor;

            // compare it's type to acceptableObject types
            foreach (string tag in acceptableTags)
            {
                if (interactable.transform.root.gameObject.tag != tag)
                {
                    unsortedValidTargets.RemoveAt(i);

                    hand.allowSelect = false;
                    hand.gameObject.SetActive(false);

                    interactable.transform.root.gameObject.GetComponent<MyGrabbableInteractable>().resetPosition();
                    interactable.transform.root.gameObject.GetComponent<MyGrabbableInteractable>().enabled = true;

                    OnRejected.Invoke();

                    hand.gameObject.SetActive(true);
                    hand.allowSelect = true;

                }
            }
        }  
    }

    /* Helpers */
    public static void Sort<T>(IList<T> hits, IComparer<T> comparer) where T : struct
    {
        bool fullPass;
        do
        {
            fullPass = true;
            for (var i = 1; i < hits.Count; ++i)
            {
                var result = comparer.Compare(hits[i - 1], hits[i]);
                if (result > 0)
                {
                    var temp = hits[i - 1];
                    hits[i - 1] = hits[i];
                    hits[i] = temp;
                    fullPass = false;
                }
            }
        } while (fullPass == false);
    }
    public static void SortByDistanceToInteractor(IXRInteractor interactor, List<IXRInteractable> unsortedTargets, List<IXRInteractable> results)
    {
        results.Clear();
        results.AddRange(unsortedTargets);

        s_InteractableDistanceSqrMap.Clear();
        var baseInteractor = interactor as XRBaseInteractor;
        foreach (var interactable in unsortedTargets)
        {
            float distance;
            if (interactable is XRBaseInteractable baseInteractable && baseInteractor != null)
            {
#pragma warning disable 618 // Calling deprecated method to help with backwards compatibility with existing user code.
                distance = baseInteractable.GetDistanceSqrToInteractor(baseInteractor);
#pragma warning restore 618
            }
            else
            {
                distance = interactable.GetDistanceSqrToInteractor(interactor);
            }

            s_InteractableDistanceSqrMap[interactable] = distance;
        }

        results.Sort(s_InteractableDistanceComparison);
    }
    static int InteractableDistanceComparison(IXRInteractable x, IXRInteractable y)
    {
        var xDistance = s_InteractableDistanceSqrMap[x];
        var yDistance = s_InteractableDistanceSqrMap[y];
        if (xDistance > yDistance)
            return 1;
        if (xDistance < yDistance)
            return -1;

        return 0;
    }
}
