using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Teleporter : MonoBehaviour
{
    private GameObject HUDRef;
    private Animator TeleportAnim;

    private void Start()
    {
        HUDRef = GameObject.Find("Screen Space HUD");
        if (HUDRef == null) { Debug.LogError("Unable to find HUD"); return; }

        TeleportAnim = HUDRef.GetComponentInChildren<Animator>();
        if (TeleportAnim == null)
        {
            Debug.LogError("Unable to find Fader in HUD"); return;
        }
    }
    public void fade()
    {
        TeleportAnim.SetTrigger("Fade");
    }

    public void teleportToObject(GameObject objToTeleTo)
    {
        StartCoroutine(tele(objToTeleTo));       
    }

    IEnumerator tele(GameObject objToTeleTo)
    {
        fade();
        yield return new WaitForSeconds(0.5f);
        gameObject.transform.position = objToTeleTo.transform.position;
    }
}
