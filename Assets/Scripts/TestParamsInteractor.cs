using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestParamsInteractor : MonoBehaviour
{
    [SerializeField] public ExamParams examParams;

    public void setTestMolecule(string mol)
    {
        examParams.currAcceptedTestMolecule = stringToMolecule(mol);
        examParams.isExam = true;
    }

    private Molecules stringToMolecule(string mol)
    {
        if (mol == "ATP") { return Molecules.ATP; }
        /*
        if (mol == Molecules.FUNNEL) { return "Funnel"; }
        if (mol == Molecules.GATED) { return "Gated"; }
        if (mol == Molecules.LIPID) { return "Lipid"; }
        if (mol == Molecules.RECEPTOR) { return "Receptor"; }

        Debug.LogError("No current molecule is set as exam molecule!");
        */
        return Molecules.NONE;
    }
}
