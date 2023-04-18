using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/CurrentRecordTimeData", order = 1)]
public class CurrentRecordData : ScriptableObject
{
    public float currentRecord;
    public float timeInArea;
}
