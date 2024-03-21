/*

    Dummy Communications Driver

    Copyright 2024 Ricardo Hanke

    Released under the terms of the GNU General Public License.
    See the file 'COPYING' in the main directory for details.

*/

#include "comm.h"




int WINAPI LibMain(HINSTANCE hinst, WORD wDataSeg, WORD cbHeapSize, LPSTR lpszCmdLine)
{
    return 1;
}



WORD WINAPI inicom(LPDCB lpdcb)
{
    return 0;
}



WORD WINAPI setcom(LPDCB lpdcb)
{
    return 0;
}



int  WINAPI setque(int cid, LPQDB lpqdb)
{
    return 0;
}



int  WINAPI reccom(int cid)
{
    return -2;
}



WORD WINAPI sndcom(int cid, int ch)
{
    return 0;
}



WORD WINAPI ctx(int cid, int ch)
{
    return 0;
}



int  WINAPI trmcom(int cid)
{
    return 0;
}



WORD WINAPI stacom(int cid, LPCOMSTAT cs)
{
    return 0;
}



LONG WINAPI cextfcn(int cid, int fcn)
{
    return -1;
}



WORD WINAPI cflush(int cid, int q)
{
    return 0;
}



LPWORD WINAPI cevt(int cid, int eventmask)
{
    return NULL;
}



WORD WINAPI cevtGet(int cid, int eventmask)
{
    return 0;
}



int WINAPI csetbrk(int cid)
{
    return 0;
}



int WINAPI cclrbrk(int cid)
{
    return 0;
}



LPDCB WINAPI getdcb(int cid)
{
    return NULL;
}



void WINAPI SuspendOpenCommPorts()
{
    return;
}



void WINAPI ReactivateOpenCommPorts()
{
    return;
}



int WINAPI CommWriteString(int cid, LPSTR pbuf, int size)
{
    return 0;
}



int WINAPI ReadCommString(int cid, LPSTR pbuf, int size)
{
    return 0;
}



int WINAPI EnableNotification(int cid, HWND hwnd, WORD wInTrigger, WORD wOutTrigger)
{
    return 0;
}

