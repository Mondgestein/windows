;
;   Dummy System Configuration Module
;
;   Copyright 2024 Ricardo Hanke
;
;   Released under the terms of the GNU General Public License.
;   See the file 'COPYING' in the main directory for details.
;

SEGMENT _TEXT ALIGN=16 PUBLIC CLASS=CODE


        global __drive_exists
        global __drive_is_remote
        global __drive_get_type
        global __drive_get_map


__drive_exists:
        push   bp
        mov    bp, sp

        mov    ax, 4409h
        mov    bl, byte [ss:bp + 4]
        inc    bl
        int    21h

        pushf
        pop     ax
        not     ax
        and     ax, 000000000000001b

        pop    bp
        ret



__drive_is_remote:
        push   bp
        mov    bp, sp

        mov    ax, 4409h
        mov    bl, byte [ss:bp + 4]
        inc    bl
        int    21h

        mov    ax, dx
        and    ax, 0001000000000000b

        pop    bp
        ret



__drive_get_type:
        push   bp
        mov    bp, sp

        mov    ax, 4408h
        mov    bl, byte [ss:bp + 4]
        inc    bl
        int    21h

        pop    bp
        ret



__drive_get_map:
        push   bp
        mov    bp, sp

        mov    ax, 440Eh
        mov    bl, byte [ss:bp + 4]
        inc    bl
        int    21h

        xor    ah, ah

        pop    bp
        ret

