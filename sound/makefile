
all: sound.drv


sound.drv: entry.asm sound.c sound.h
           nasm -f obj -o entry.obj entry.asm
           wcc -zc -zl -s -bt=WINDOWS sound.c
           wlink @sound.lnk

