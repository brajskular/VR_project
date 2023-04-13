using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class moveBody : MonoBehaviour
{
public bool isTriggered;

    //public int score = 0;
    //public TMP_Text scoreText;
    public Transform player;
    public float max_speed = 0.05f;
    public float speed = 0.0f;
    private bool accelerate = false;
    private bool decelerate = false;
    
    // Start is called before the first frame update
    void Start()
    {
     isTriggered = false;   
     accelerate = false;
     decelerate = false;
        XRGrabInteractable grabInteractable = GetComponent<XRGrabInteractable>();
        grabInteractable.activated.AddListener(moveB);
        grabInteractable.deactivated.AddListener(stopB);
    }
public void moveB(ActivateEventArgs args){
isTriggered = true;
accelerate = true;
decelerate = false;
}

public void stopB(DeactivateEventArgs args){
isTriggered = false;
decelerate = true;
accelerate = false;
}
    
    // Update is called once per frame
    void Update()
    {  
        if(accelerate){
            speed += 0.005f;
            if(speed >= max_speed){
                accelerate = false;
                speed = max_speed;
            }
        } else if(decelerate){
            speed -= 0.02f;
            if(speed <= 0.0f){
                decelerate = false;
                speed = 0;
            }
        }
        
        // if(isTriggered){
        //score = int.Parse(scoreText.text);
        //score++;
        //scoreText.text = score.ToString();
            Vector3 direction = transform.forward;
            //transform.position += direction * speed;
            player.position += direction * speed;
            // }
    }
}
