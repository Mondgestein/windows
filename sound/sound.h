/*

    Dummy Sound Device Driver

    Copyright 2024 Ricardo Hanke

    Released under the terms of the GNU General Public License.
    See the file 'COPYING' in the main directory for details.

*/

#include <windows.h>



int  WINAPI OpenSound(void);
void WINAPI CloseSound(void);
int  WINAPI SetVoiceQueueSize(int, int);
int  WINAPI SetVoiceNote(int, int, int, int);
int  WINAPI SetVoiceAccent(int, int, int, int, int);
int  WINAPI SetVoiceEnvelope(int, int, int);
int  WINAPI SetSoundNoise(int, int);
int  WINAPI SetVoiceSound(int, DWORD, int);
int  WINAPI StartSound(void);
int  WINAPI StopSound(void);
int  WINAPI WaitSoundState(int);
int  WINAPI SyncAllVoices(void);
int  WINAPI CountVoiceNotes(int);
int  FAR * WINAPI GetThresholdEvent(void);
int  WINAPI GetThresholdStatus(void);
int  WINAPI SetVoiceThreshold(int, int);
int  WINAPI DoBeep(void);

