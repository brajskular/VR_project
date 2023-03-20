using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class AnimateHandOnInput : MonoBehaviour

{
    public InputActionProperty pinchAnimationAction;
    public InputActionProperty gripAnimationAction;
    public InputActionProperty isGripAction;
    private float pastValue = 0;
    private bool tighten;
    public Animator handAnimator;
    // Start is called before the first frame update
    void Start()
    {
        pastValue = gripAnimationAction.action.ReadValue<float>();
        tighten = true;
    }

    // Update is called once per frame
    void Update()
    {
        float triggerValue = pinchAnimationAction.action.ReadValue<float>();
        handAnimator.SetFloat("Trigger", triggerValue);
        
        
        //if(pastValue < gripValue)
        
        float gripValue = gripAnimationAction.action.ReadValue<float>();
        if(pastValue < gripValue)
        pastValue = gripValue;
        handAnimator.SetFloat("Grip", pastValue);
        
    }
}
