using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.Interaction.Toolkit;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using TMPro;
using System;

public class areaTimer : MonoBehaviour
{
    private float timeInArea = 0f;
    public CurrentRecordData data;
    private bool isInArea = false;

    private void Update()
    {
        if (GetComponent<BoxCollider>().bounds.Contains(GameObject.FindGameObjectWithTag("Player").transform.position))
        {
            if (!isInArea)
            {
                isInArea = true;
            }
            timeInArea += Time.deltaTime;
        }
        else
        {
            isInArea = false;
        }
        data.timeInArea = timeInArea;
    }
}

