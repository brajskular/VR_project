using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "GlobalStrings", menuName = "ScriptableObjects/GlobalStrings", order = 1)]
public class GlobalStrings : ScriptableObject
{
    public string incorrectProtein;
    public string correctProtein;

    public string obj_APT;
    public string obj_Funnel;
    public string obj_GATED;
    public string obj_Receptor;
}
