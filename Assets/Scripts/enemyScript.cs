using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class enemyScript : MonoBehaviour
{
    public Transform movingPlatform;
        public float speed = 1f;
    public float distance = 5f;
    public Vector3 startPosition;


    // Start is called before the first frame update
    void Start()
    {
        startPosition = transform.position;
        
    }

    // Update is called once per frame
    void Update()
    {
    
    float newX = Mathf.PingPong(Time.time * speed, distance);
 
        
        transform.position = startPosition + new Vector3(newX, movingPlatform.position.y, 0);
        
    }
}


