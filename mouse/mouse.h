/*

    Dummy Mouse Device Driver

    Copyright 2024 Ricardo Hanke

    Released under the terms of the GNU General Public License.
    See the file 'COPYING' in the main directory for details.

*/

#include <windows.h>



typedef struct tagMOUSEINFO
{
    char  msExist;
    char  msRelative;
    short msNumButtons;
    short msRate;
    short msXThreshold;
    short msYThreshold;
    short msXRes;
    short msYRes;
    short msMouseCommPort;
    
} MOUSEINFO;

typedef MOUSEINFO FAR *LPMOUSEINFO;


int  WINAPI Inquire(LPMOUSEINFO);
void WINAPI Enable(void FAR *);
void WINAPI Disable(void);
int  WINAPI MouseGetIntVect(void);

