using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.Events;

public class TaskDisplay : MonoBehaviour
{
    public TextMeshProUGUI currentTask;
    [SerializeField] public int numOfSubTasksCompleted = 0;
    [SerializeField] public int totalNumOfSubTasks = 0;

    public int getnumOfSubTasksCompleted() 
    { return numOfSubTasksCompleted; }
    public void setnumOfSubTasksCompleted(int num) 
    { numOfSubTasksCompleted = num; }

    public int gettotalNumOfSubTasks() 
    { return totalNumOfSubTasks; }
    public void settotalNumOfSubTasks(int num) 
    { totalNumOfSubTasks = num; }

    public UnityEvent onAllTasksCompleted;

    private string outputTask;

    /*
    private void Start()
    {
        numOfSubTasksCompleted = 0;
        totalNumOfSubTasks = 0;
    }
    */

    public void incrementNumOfSubTasksCompleted(int numToIncrement)
    {
        numOfSubTasksCompleted += numToIncrement;
        setTask(outputTask);
        if (numOfSubTasksCompleted >= totalNumOfSubTasks)
        {
            onAllTasksCompleted.Invoke();
        }
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
