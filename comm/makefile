
all: comm.drv


comm.drv: entry.asm comm.c comm.h
          nasm -f obj -o entry.obj entry.asm
          wcc -zc -zl -s -bt=WINDOWS comm.c
          wlink @comm.lnk

