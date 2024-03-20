/*

    Dummy System Configuration Module

    Copyright 2024 Ricardo Hanke

    Released under the terms of the GNU General Public License.
    See the file 'COPYING' in the main directory for details.

*/

#include <windows.h>



DWORD WINAPI InquireSystem(WORD, WORD);
WORD  WINAPI CreateSystemTimer(WORD, void FAR *);
WORD  WINAPI KillSystemTimer(WORD);
void  WINAPI EnableSystemTimers(void);
void  WINAPI DisableSystemTimers(void);
DWORD WINAPI GetSystemMSecCount(void);
WORD  WINAPI Get80x87SaveSize(void);
void  WINAPI Save80x87State(void FAR *);
void  WINAPI Restore80x87State(const void FAR *);
void  WINAPI A20_Proc(WORD);

