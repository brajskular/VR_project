using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class TestEvents : MonoBehaviour
{
    [SerializeField] UnityEvent ATPExam;
    [SerializeField] UnityEvent FunnelExam;
    [SerializeField] UnityEvent ReceptorExam;
    [SerializeField] UnityEvent GatedExam;
    [SerializeField] UnityEvent LipidExam;
    [SerializeField] UnityEvent ExamComplete;

    private int currentEventIndex;
    private void Start()
    {
        currentEventIndex = 0;
    }

    public void moveToNextEvent()
    {
        switch (currentEventIndex)
        {
            case 0:
                ATPExam.Invoke();
                currentEventIndex++;
                break;

            case 1:
                FunnelExam.Invoke();
                currentEventIndex++;
                break;

            case 2:
                ReceptorExam.Invoke();
                currentEventIndex++;
                break;

            case 3:
                GatedExam.Invoke();
                currentEventIndex++;
                break;

            case 4:
                LipidExam.Invoke();
                currentEventIndex++;
                break;

            case 5:
                ExamComplete.Invoke();
                break;

            default:
                return;
        }
    }
}
