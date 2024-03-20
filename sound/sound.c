/*

    Dummy Sound Device Driver

    Copyright 2024 Ricardo Hanke

    Released under the terms of the GNU General Public License.
    See the file 'COPYING' in the main directory for details.

*/

#include "sound.h"




int WINAPI LibMain(HINSTANCE hinst, WORD wDataSeg, WORD cbHeapSize, LPSTR lpszCmdLine)
{
    return 1;
}



int WINAPI OpenSound()
{
    return 1;
}



void WINAPI CloseSound()
{
    return;
}



int WINAPI SetVoiceQueueSize(int voice, int size)
{
    return 1;
}



int WINAPI SetVoiceNote(int voice, int value, int length, int cdots)
{
    return 1;
}



int WINAPI SetVoiceAccent(int voice, int tempo, int volume, int mode, int pitch)
{
    return 1;
}



int WINAPI SetVoiceEnvelope(int voice, int shape, int repeat)
{
    return 0;
}



int WINAPI SetSoundNoise(int source, int duration)
{
    return 0;
}



int WINAPI SetVoiceSound(int voice, DWORD frequency, int duration)
{
    return 1;
}



int WINAPI StartSound()
{
    return 1;
}



int WINAPI StopSound()
{
    return 0;
}



int WINAPI WaitSoundState(int state)
{
    return 1;
}



int WINAPI SyncAllVoices()
{
    return 0;
}



int WINAPI CountVoiceNotes(int voice)
{
    return 0;
}



int FAR * WINAPI GetThresholdEvent()
{
    return 0;
}




int WINAPI GetThresholdStatus()
{
    return 0;
}




int WINAPI SetVoiceThreshold(int voice, int cnote)
{
    return 0;
}



int WINAPI DoBeep()
{
    return 1;
}

