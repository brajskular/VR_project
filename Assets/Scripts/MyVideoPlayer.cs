using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;
using UnityEngine.Events;

public class MyVideoPlayer : MonoBehaviour
{
    [SerializeField] UnityEvent onVideoEnded;
    [SerializeField] VideoPlayer videoPlayer;
    [SerializeField] bool playOnce;
    private bool played;
    // Start is called before the first frame update
    void Start()
    {
        played = false;
        videoPlayer.loopPointReached += EndReached;
    }

    // Update is called once per frame
    void EndReached(UnityEngine.Video.VideoPlayer vp)
    {
        if(playOnce)
        {
            if(!played)
            {
                onVideoEnded.Invoke();
            }
        }
        else
        {
            onVideoEnded.Invoke();
        }
        played = true;
    }
}
