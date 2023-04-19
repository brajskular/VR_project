using System.Collections;
using System.Collections.Generic;
using UnityEngine;



[CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/ExamParams", order = 1)]

public class ExamParams : ScriptableObject
{
    [SerializeField]
    public bool isExam;

    [SerializeField]
    public Molecules currAcceptedTestMolecule;
}
