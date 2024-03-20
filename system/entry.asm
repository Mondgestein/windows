;
;   Dummy driver entry routine
;
;   Copyright 2024 Ricardo Hanke
;
;   Released under the terms of the GNU General Public License.
;   See the file 'COPYING' in the main directory for details.
;

GROUP          DGROUP _DATA


SEGMENT        _DATA ALIGN=16 PUBLIC CLASS=DATA

_HShift        db     0


SEGMENT        _TEXT ALIGN=16 PUBLIC CLASS=CODE

               global __DLLstart_
               extern LIBMAIN

__DLLstart_:   push   di
               push   ds
               push   cx
               push   es
               push   si

               call   far LIBMAIN

               pop    si
               pop    es
               pop    cx
               pop    ds
               pop    di

               retf

