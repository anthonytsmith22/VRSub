//This file allows for audio files to be put in for each button on the Wallphone.

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PhoneAudio : MonoBehaviour
{
    public AudioClip button1;
    public AudioClip button2;
    public AudioClip button3;
    public AudioClip button4;
    public AudioClip button5;
    public AudioClip button6;        
    public AudioClip button7;
    public AudioClip button8;
    public AudioClip button9;
    public AudioClip button0;        
    public AudioClip buttonPound;
    public AudioClip buttonStar;    
    public AudioSource audio;

    void Start()
    {
        audio = GetComponent<AudioSource>();
    }

    public void playButton1() {
        audio.PlayOneShot(button1, 1F);        
    }
    public void playButton2() {
        audio.PlayOneShot(button2, 1F);        
    }    
    public void playButton3() {
        audio.PlayOneShot(button3, 1F);        
    }
    public void playButton4() {
        audio.PlayOneShot(button4, 1F);        
    }    
    public void playButton5() {
        audio.PlayOneShot(button5, 1F);        
    }
    public void playButton6() {
        audio.PlayOneShot(button6, 1F);        
    }    
    public void playButton7() {
        audio.PlayOneShot(button7, 1F);        
    }
    public void playButton8() {
        audio.PlayOneShot(button8, 1F);        
    }    
    public void playButton9() {
        audio.PlayOneShot(button9, 1F);        
    }
    public void playButton0() {
        audio.PlayOneShot(button0, 1F);        
    }    
    public void playButtonPound() {
        audio.PlayOneShot(buttonPound, 1F);        
    }
    public void playButtonStar() {
        audio.PlayOneShot(buttonStar, 1F);        
    }                    
}
