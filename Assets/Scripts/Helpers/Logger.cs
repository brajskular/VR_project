using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Logger : MonoBehaviour
{
    public void writeToHUDRemote(string message)
    {
        GameObject HUDRef = GameObject.Find("Screen Space HUD");
        if (HUDRef == null) { Debug.LogError("Unable to find HUD"); return; }

        MessageDisplay MessageRef = HUDRef.GetComponentInChildren<MessageDisplay>();
        if(MessageRef == null) { Debug.LogError("Unable to find Messager in HUD"); return; }

        MessageRef.setMessage(message);
        
        Debug.Log(HUDRef);
    }

    // Start is called before the first frame update
    public void writeToLog(string message)
    {
        Debug.Log(message);
    }
}
