using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class destroyOnTrigger : MonoBehaviour
{
public TMP_Text scoreText;
    //public GameObject bullet;
    //public Transform bulletSpawn;
    //public float bulletSpeed = 20;
    // Start is called before the first frame update
    void Start()
    {
        XRGrabInteractable grabInteractable = GetComponent<XRGrabInteractable>();
        grabInteractable.activated.AddListener(destroyT);
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void destroyT(ActivateEventArgs args)
    {
            int score = int.Parse(scoreText.text);
            score += 1;
            scoreText.text = score.ToString();
        //GameObject newBullet = Instantiate(bullet);
        //newBullet.transform.position = bulletSpawn.position;
        //newBullet.GetComponent<Rigidbody>().velocity = bulletSpawn.forward * bulletSpeed;
        //Destroy(newBullet, 5);
        Destroy(gameObject, 0.1f);
    }
}
