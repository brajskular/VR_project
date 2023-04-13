using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class MessageDisplay : MonoBehaviour
{
    public TextMeshProUGUI messageText;
    [SerializeField] float timeToDisplayMessage = 2.0f; // In seconds

    public void setMessage(string message)
    {
        messageText.text = message;
        StartCoroutine(showMessage());

    }
    private IEnumerator showMessage()
    {
        yield return new WaitForSeconds(timeToDisplayMessage);
        messageText.text = "";
    }
}
