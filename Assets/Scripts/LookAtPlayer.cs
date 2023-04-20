using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LookAtPlayer : MonoBehaviour
{
    private void LateUpdate()
    {
        Camera playerCam = Camera.main;
        transform.LookAt(transform.position + playerCam.transform.rotation * Vector3.forward, 
                         playerCam.transform.rotation * Vector3.up);
    }
}
