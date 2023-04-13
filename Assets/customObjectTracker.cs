using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.Interaction.Toolkit;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using TMPro;
using System;

public class customObjectTracker : MonoBehaviour
{
    public XRController controller;
    public Transform target;

    private float gazeTime = 0f;
    private bool isGazing = false;
    
    public TMP_Text timeText;
    public float timeElapsed = 0;
    public float totalTimeGazed = 0;
    private float startTime;

    void Update()
    {
        if (controller.inputDevice.TryGetFeatureValue(CommonUsages.deviceRotation, out Quaternion deviceRotation))
        {
            Vector3 forward = deviceRotation * Vector3.forward;
            RaycastHit hitInfo;
            if (Physics.Raycast(controller.transform.position, forward, out hitInfo))
            {
                if (hitInfo.transform.gameObject.CompareTag("tele"))
                {
                    if (!isGazing)
                    {
                        isGazing = true;
                        gazeTime = Time.time;
                    }
                    else
                    {
                        float currentTime = Time.time;
                        timeElapsed = currentTime - gazeTime;
                        Debug.Log("Time spent looking at target: " + timeElapsed + " seconds");
                    }
                }
                else
                {
                    isGazing = false;
                    totalTimeGazed += timeElapsed;
                }
            }
        }
        timeText.text = "Time: " + totalTimeGazed.ToString("F2");
    }
}

