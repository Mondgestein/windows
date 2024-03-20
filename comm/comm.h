/*

    Dummy Communications Driver

    Copyright 2024 Ricardo Hanke

    Released under the terms of the GNU General Public License.
    See the file 'COPYING' in the main directory for details.

*/

#include <windows.h>



typedef struct tagQDB
{
    char  FAR * pqRx;
    short       cbqRx;
    char  FAR * pqTx;
    short       cbqTx;
} QDB;

typedef QDB FAR * LPQDB;

typedef COMSTAT FAR * LPCOMSTAT;



WORD   WINAPI inicom(LPDCB);
WORD   WINAPI setcom(LPDCB);
int    WINAPI setque(int, LPQDB);
int    WINAPI reccom(int);
WORD   WINAPI sndcom(int, int);
WORD   WINAPI ctx(int, int);
int    WINAPI trmcom(int);
WORD   WINAPI stacom(int, LPCOMSTAT);
LONG   WINAPI cextfcn(int, int);
WORD   WINAPI cflush(int, int);
LPWORD WINAPI cevt(int, int);
WORD   WINAPI cevtGet(int, int);
int    WINAPI csetbrk(int);
int    WINAPI cclrbrk(int);
LPDCB  WINAPI getdcb(int);
void   WINAPI SuspendOpenCommPorts(void);
void   WINAPI ReactivateOpenCommPorts(void);
int    WINAPI CommWriteString(int, LPSTR, int);
int    WINAPI ReadCommString(int, LPSTR, int);
int    WINAPI EnableNotification(int, HWND, WORD, WORD);

