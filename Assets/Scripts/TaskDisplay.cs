using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TaskDisplay : MonoBehaviour
{
    public TextMeshProUGUI currentTask;
    public int numOfSubTasksCompleted { get; set; }
    public int totalNumOfSubTasks { get; set; }

    private string outputTask;

    private void Start()
    {
        numOfSubTasksCompleted = 0;
        totalNumOfSubTasks = 0;
    }

    public void incrementNumOfSubTasksCompleted(int numToIncrement)
    {
        numOfSubTasksCompleted += numToIncrement;
        setTask(outputTask);
    }
    public void setTask(string task)
    {
        outputTask = task;

        string returnTask = outputTask;

        if (totalNumOfSubTasks >= 1)
        {
            returnTask += ": " + numOfSubTasksCompleted + "/" + totalNumOfSubTasks;
        }

        currentTask.text = returnTask;
    }

    public void resetTask()
    {
        outputTask = "";
        numOfSubTasksCompleted = 0;
        totalNumOfSubTasks = 0;
    }

}
