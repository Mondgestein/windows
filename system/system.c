/*

    Dummy System Configuration Module

    Copyright 2024 Ricardo Hanke

    Released under the terms of the GNU General Public License.
    See the file 'COPYING' in the main directory for details.

*/

#include "system.h"




int WINAPI LibMain(HINSTANCE hinst, WORD wDataSeg, WORD cbHeapSize, LPSTR lpszCmdLine)
{
    return 1;
}



DWORD WINAPI InquireSystem(WORD code, WORD arg)
{
    if (code == 1)
        return 3;

    return 0;
}



WORD WINAPI CreateSystemTimer(WORD rate, void FAR * timerproc)
{
    return 0;
}



WORD WINAPI KillSystemTimer(WORD timer)
{
    return 0;
}



void WINAPI EnableSystemTimers(void)
{
    return;
}



void WINAPI DisableSystemTimers(void)
{
    return;
}



DWORD WINAPI GetSystemMSecCount(void)
{
    return 0;
}



WORD WINAPI Get80x87SaveSize(void)
{
    return 0;
}



void WINAPI Save80x87State(void FAR * state)
{
    return;
}



void WINAPI Restore80x87State(const void FAR * state)
{
    return;
}



void WINAPI A20_Proc(WORD state)
{
    return;
}
