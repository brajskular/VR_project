using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.Interaction.Toolkit;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using TMPro;
using System;

public class simpleGazeTracker : MonoBehaviour
{
    private float gazeTime = 0f;
    private bool isGazing = false;
    
    public TMP_Text timeText;
    public float timeElapsed = 0;
    public float totalTimeGazed = 0;
    private LayerMask teleLayerMask;
    // Start is called before the first frame update
    void Start()
    {
        teleLayerMask = LayerMask.GetMask("tele");
    }

    // Update is called once per frame
    void Update()
    {
        RaycastHit hit;
        if (Physics.Raycast(transform.position, transform.forward, out hit))
            {
                if (hit.transform.CompareTag("tele"))
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
                    timeElapsed = 0;
                }
               
            }  else
                {
                    isGazing = false;
                    totalTimeGazed += timeElapsed;
                    timeElapsed = 0;
                }
            timeText.text = "Time: " + totalTimeGazed.ToString("F2");
    }
}



