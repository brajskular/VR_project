using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
using UnityEngine.InputSystem;

public class ObjectDestroyer : MonoBehaviour
{
    public string buttonName = "Trigger"; // the name of the button to use for destroying objects
    public float destroyDelay = 0.5f; // the delay before destroying the object
    public float destroyDistance = 0.5f; // the maximum distance the object can be from the controller

    public int score = 0;
    public int endScore = 3;
    public TMP_Text scoreText;
    public TMP_Text finalScoreText;
    public InputActionProperty pinchAnimationAction;
    
    void OnTriggerStay(Collider other)
    {
    bool triggerValue = pinchAnimationAction.action.ReadValue<bool>();
        if (triggerValue)
        {
            if (other.gameObject.CompareTag("Treasure"))
            {
                if (Vector3.Distance(other.transform.position, transform.position) <= destroyDistance)
                {
                    //Destroy(other.gameObject);
                    score++;
                }
            }
        }
    }
    
        private void Update()
    {
        scoreText.text = "Score: " + score.ToString();
        if (score == endScore)
        {   
            finalScoreText.text = "All treasures collected. You Win!" ;
            Invoke("EndGame", 3f);
        }
    }
}



