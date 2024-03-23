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
    {
        int drivetype;
        int drivemap;
    
        if (_drive_exists(arg) == 0)
            return 0;

        if (_drive_is_remote(arg))
            return DRIVE_REMOTE;

        drivetype = _drive_get_type(arg);
        drivemap  = _drive_get_map(arg);

        if ((drivemap == 0) || (drivemap == arg + 1))
            drivetype = drivetype + 2;

        return MAKELONG(drivetype, drivemap);
    }

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
    if (_fpu_does_exist())
    {
        return FPU_STATE_SIZE;
    }

    return 0;
}



void WINAPI Save80x87State(void FAR * state)
{
    _fpu_save_state(state);
}



void WINAPI Restore80x87State(const void FAR * state)
{
    _fpu_load_state(state);
}



void WINAPI A20_Proc(WORD state)
{
    return;
}

