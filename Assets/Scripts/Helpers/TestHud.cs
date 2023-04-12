using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class TestHud : MonoBehaviour
{
    public UnityEvent test;
    public UnityEvent test2;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(R());
    }

    private IEnumerator R()
    {
        yield return new WaitForSeconds(2);
        test.Invoke();
        StartCoroutine(Q());
    }
    private IEnumerator Q()
    {
        yield return new WaitForSeconds(2);
        test2.Invoke();
    }
}
