using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;
public class CurrentRecordKeeper : MonoBehaviour
{
    public TextMeshProUGUI currentRecordText;
    [SerializeField] CurrentRecordData currentRecordTime;
    public void checkIfRecord(float comp)
    {
        if(comp < currentRecordTime.currentRecord) 
        { 
            currentRecordTime.currentRecord = comp;

        }

        TimeSpan time = TimeSpan.FromSeconds(currentRecordTime.currentRecord);
        currentRecordText.text = "Current Record: " + time.ToString(@"mm\:ss");
    }

}
