using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Logger : MonoBehaviour
{
    // Start is called before the first frame update
    public void writeToLog(string message)
    {
        Debug.Log(message);
    }
}
