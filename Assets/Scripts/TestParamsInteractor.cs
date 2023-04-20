using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestParamsInteractor : MonoBehaviour
{
    [SerializeField] public ExamParams examParams;

    public void setTestMolecule(string mol)
    {
        examParams.currAcceptedMoleculeTag = mol;
        examParams.isExam = true;
    }
    public void setIsTest(bool t)
    {
        examParams.isExam = t;
    }
    
    public void resetExam()
    {
        examParams.isExam = false;
        examParams.currAcceptedMoleculeTag = "None";
    }

    private void OnApplicationQuit()
    {
        resetExam();
    }
}
