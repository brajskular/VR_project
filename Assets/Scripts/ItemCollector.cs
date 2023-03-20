using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class ItemCollector : MonoBehaviour
{
    public int score = 0;
    public int endScore = 3;
    public TMP_Text scoreText;
    public TMP_Text finalScoreText;
    public Button restartButton;
    public Button endButton;
    public Transform teleportTarget;


    private void Start()
    {
        scoreText.text = score.ToString();
        restartButton.gameObject.SetActive(false);
        endButton.gameObject.SetActive(false);
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Treasure"))
        {
            //Destroy(other.gameObject);
            //score++;
            Debug.Log("Score: " + score);
        }
    }
    
  //  private void OnCollisionEnter(Collision other){
   // if (other.gameObject.CompareTag("Enemy"))
    //    {
     //       //Destroy(other.gameObject);
      //      score++;
       //     Debug.Log("Score: " + score);
       // }
   // }
    

    private void Update()
    {
        score = int.Parse(scoreText.text);
        if (score == endScore)
        {   
            //finalScoreText.text = "All treasures collected. You Win!" ;
            //restartButton.gameObject.SetActive(true);
            //endButton.gameObject.SetActive(true);
            //Invoke("EndGame", 3f);

            // Application.Quit();
        }
    }



public void RestartGame()
{
SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
}

public void EndGame()
{
Application.Quit();
}

}
