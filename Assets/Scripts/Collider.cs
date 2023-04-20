using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Collider : MonoBehaviour
{
    // Start is called before the first frame update
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            writeToHUDRemote("Return to the play area");
            Debug.Log("Player Collided with collider");
        }
    }

    public void writeToHUDRemote(string message)
    {
        GameObject HUDRef = GameObject.Find("Screen Space HUD");
        if (HUDRef == null) { Debug.LogError("Unable to find HUD"); return; }

        MessageDisplay MessageRef = HUDRef.GetComponentInChildren<MessageDisplay>();
        if (MessageRef == null) { Debug.LogError("Unable to find Messager in HUD"); return; }

        MessageRef.setMessage(message);

        Debug.Log(HUDRef);
    }
}
