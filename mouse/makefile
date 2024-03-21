
all: mouse.drv


mouse.drv: entry.asm mouse.c mouse.h
           nasm -f obj -o entry.obj entry.asm
           wcc -zc -zl -s -bt=WINDOWS mouse.c
           wlink @mouse.lnk

