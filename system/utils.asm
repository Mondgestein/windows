;
;   Dummy System Configuration Module
;
;   Copyright 2024 Ricardo Hanke
;
;   Released under the terms of the GNU General Public License.
;   See the file 'COPYING' in the main directory for details.
;

SEGMENT _TEXT ALIGN=16 PUBLIC CLASS=CODE


        global __drive_gettype


__drive_gettype:
        push   bp
        mov    bp, sp
        mov    ax, 4408h
        mov    bl, byte [bp + 4]
        inc    bl
        int    21h
        inc    ax
        inc    ax
        jnc    __gt_end
        xor    ax, ax

__gt_end:
        pop    bp
        ret
