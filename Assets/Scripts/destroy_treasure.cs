using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;


public class destroy_treasure : MonoBehaviour
{
public TMP_Text scoreText;
public Transform hand;
public InputActionProperty pinchAnimationAction;
public float destroyDistance = 0.5f;

 private XRGrabInteractable grabInteractable;
    //  public InputActionProperty grabAnimationAction;
    // public string buttonName = "Trigger"; // the name of the button to use for destroying objects
    // public float destroyDistance = 0.5f; // the maximum distance the object can be from the controller

//private void OnTriggerEnter(Collider other) {
//    if (other.gameObject.tag == "Player") {
//        Destroy(gameObject);
//    }
//}
void start() {
     grabInteractable = GetComponent<XRGrabInteractable>();
     grabInteractable.activated.AddListener(destroy);
}
    // void OnTriggerEnter(Collider other)
    // {
    // bool triggerValue = pinchAnimationAction.action.ReadValue<bool>();
    //     if (triggerValue)
    //     {
    //         int score = int.Parse(scoreText.text);
    //         score += 1;
    //         scoreText.text = score.ToString(); 
    //         GetComponent<XRGrabInteractable>().colliders.Clear();
    //         Destroy(gameObject);
    //     }
    // }

     public void destroy(ActivateEventArgs args) {
    //     int score = int.Parse(scoreText.text);
    //     score += 1;
    //     scoreText.text = score.ToString();  
            scoreText.text = "dskjhf";
    //     GetComponent<XRGrabInteractable>().colliders.Clear();
    //     Destroy(this.gameObject);
     }
    private void Update(){
        bool triggerValue = pinchAnimationAction.action.ReadValue<bool>();
        if (triggerValue)
        {
            //int score = int.Parse(scoreText.text);
            //score += 1;
            //scoreText.text = score.ToString(); 
            scoreText.text = "sdfsadf";
            Destroy(gameObject);
        }
    //scoreText.text = "Score: " + score.ToString();
    }
}


