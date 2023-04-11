using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SnapPointGroupManager : MonoBehaviour
{
    public UnityEvent OnAllChildrenHappy;

    private int numOfChildren;
    private int numOfHappyChildren = 0;

    void Start()
    {
        numOfChildren = transform.childCount;
    }
    
    // The correct object was added to this child!
    public void childHappy()
    {
        numOfHappyChildren++;
        if(numOfHappyChildren == numOfChildren)
        {
            OnAllChildrenHappy.Invoke();
        }
    }

    // The correct object was removed from this child
    public void childUnahppy()
    {
        numOfHappyChildren--;
    }
}
