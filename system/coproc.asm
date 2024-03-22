;
;   Dummy System Configuration Module
;
;   Copyright 2024 Ricardo Hanke
;
;   Released under the terms of the GNU General Public License.
;   See the file 'COPYING' in the main directory for details.
;

SEGMENT _TEXT ALIGN=16 PUBLIC CLASS=CODE


        global __fpu_does_exist
        global __fpu_load_state
        global __fpu_save_state



__fpu_does_exist:
        push   bp
        mov    bp, sp

        xor    ax, ax
        int    11h
        and    ax, 000000000000010b

        pop    bp
        ret



__fpu_load_state:
        push   bp
        mov    bp, sp

        push   es
        push   bx

        mov    bx, word [ss:bp + 4]
        mov    es, word [ss:bp + 6]
        frstor [es:bx]

        pop    bx
        pop    es

        pop    bp
        ret



__fpu_save_state:
        push   bp
        mov    bp, sp

        push   es
        push   bx

        mov    bx, word [ss:bp + 4]
        mov    es, word [ss:bp + 6]
        fsave  [es:bx]

        pop    bx
        pop    es

        pop    bp
        ret

