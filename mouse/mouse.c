/*

    Dummy Mouse Device Driver

    Copyright 2024 Ricardo Hanke

    Released under the terms of the GNU General Public License.
    See the file 'COPYING' in the main directory for details.

*/

#include "mouse.h"




int WINAPI LibMain(HINSTANCE hinst, WORD wDataSeg, WORD cbHeapSize, LPSTR lpszCmdLine)
{
    return 1;
}



int WINAPI Inquire(LPMOUSEINFO lpMouseInfo)
{
    return 0;
}



void WINAPI Enable(void FAR * lpVoid)
{
    return;
}



void WINAPI Disable(void)
{
    return;
}



int WINAPI MouseGetIntVect(void)
{
    return -1;
}

