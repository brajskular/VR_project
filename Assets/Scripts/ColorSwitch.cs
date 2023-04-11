using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorSwitch : MonoBehaviour
{
    [SerializeField] Color onColor;
    [SerializeField] Color offColor;
    private Renderer renderer;
    private void Start()
    {
        renderer = GetComponent<Renderer>();
    }
    public void turnOn() { renderer.material.color = onColor; }
    public void turnOff() { renderer.material.color = offColor; }
}
