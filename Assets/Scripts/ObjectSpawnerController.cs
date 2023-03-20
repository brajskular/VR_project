using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectSpawnerController : MonoBehaviour
{
    public Transform movingPlatform;
    public GameObject objectToSpawn;
    // Start is called before the first frame update
    void Start()
    {
        float xPos = Random.Range(-5.0f, 5.0f);        
        float zPos = Random.Range(-5.0f, 5.0f);  
        Vector3 spawnPos = new Vector3(xPos, 1.2f, zPos) + movingPlatform.position; 

        GameObject newObject = Instantiate(objectToSpawn, spawnPos, Quaternion.identity);
        newObject.transform.parent = movingPlatform;       
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
