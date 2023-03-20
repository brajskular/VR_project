using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.Events;
using System;

public class TeleportOnCollision : MonoBehaviour
{
    public Transform teleportTarget;
    public float teleportDelay = 0.5f;
    public AnimationCurve teleportCurve = AnimationCurve.EaseInOut(0.0f, 0.0f, 1.0f, 1.0f);

    private bool isTeleporting = false;

    private void OnCollisionEnter(Collision collision){
        if(collision.gameObject.CompareTag("Enemy") && !isTeleporting){
            StartCoroutine(TeleportPlayer());
        }
    }

private IEnumerator TeleportPlayer(){
    isTeleporting = true;
    float timer = 0.0f;
    Vector3 startPos = transform.position;
    // Quaternion startRot = transform.rotation;

    while(timer < teleportDelay){
        timer += Time.deltaTime;
        float t = teleportCurve.Evaluate(timer / teleportDelay);
        transform.position = Vector3.Lerp(startPos, teleportTarget.position, t);
        // transform.rotation = Quaternion.Lerp(startRot, teleportTarget.rotation, t);
        yield return null;
    }

    transform.position = teleportTarget.position;

    isTeleporting = false;
}
}
