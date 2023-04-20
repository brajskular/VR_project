using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SnapPointGroupManager : MonoBehaviour
{
    public UnityEvent onChildHappy;
    public UnityEvent onChildUnhappy;
    public UnityEvent OnAllChildrenHappy;

    [SerializeField] private int numOfChildren;
    [SerializeField] private int numOfHappyChildren = 0;

    public bool isLipid = false;
    public int numOfLipidsRequired;
    public int currentNumOfLipids = 0;

    void Start()
    {
        numOfChildren = transform.childCount;
    }
    
    // The correct object was added to this child!
    public void childHappy()
    {
        // Lipid stuff
        if (isLipid)
        {
            onChildHappy.Invoke();

            currentNumOfLipids++;
            if (currentNumOfLipids == numOfLipidsRequired)
            {
                OnAllChildrenHappy.Invoke();
            }
        }

        else
        {
            // All others
            onChildHappy.Invoke();

            numOfHappyChildren++;
            if (numOfHappyChildren == numOfChildren)
            {
                OnAllChildrenHappy.Invoke();
            }
        }
    }

    // The correct object was removed from this child
    public void childUnahppy()
    {
        // lipids
        if (isLipid)
        {
            onChildUnhappy.Invoke();
            currentNumOfLipids--;
        }

        // all others
        onChildUnhappy.Invoke();
        numOfHappyChildren--;
    }
}
