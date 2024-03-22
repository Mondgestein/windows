
all: system.drv


system.drv: entry.asm utils.asm coproc.asm system.c system.h
            nasm -f obj -o entry.obj entry.asm
            nasm -f obj -o utils.obj utils.asm
            nasm -f obj -o coproc.obj coproc.asm
            wcc -zc -zl -s -bt=WINDOWS system.c
            wlink @system.lnk

