using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class FireBulletOnActivate : MonoBehaviour
{
    public GameObject bullet;
    public Transform bulletSpawn;
    public float bulletSpeed = 20;
    // Start is called before the first frame update
    void Start()
    {
        XRGrabInteractable grabInteractable = GetComponent<XRGrabInteractable>();
        grabInteractable.activated.AddListener(FireBullet);
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void FireBullet(ActivateEventArgs args)
    {
        GameObject newBullet = Instantiate(bullet);
        newBullet.transform.position = bulletSpawn.position;
        newBullet.GetComponent<Rigidbody>().velocity = bulletSpawn.forward * bulletSpeed;
        Destroy(newBullet, 5);
    }
}
