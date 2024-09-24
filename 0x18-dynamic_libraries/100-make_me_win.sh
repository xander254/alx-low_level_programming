#!/bin/bash
gcc -shared -fPIC srand.c rand.c -o randgen.so
LD_PRELOAD=/home/alexander/alx_se/alx-low_level_programming/0x18-dynamic_libraries/randgen.so ./gm 9 8 10 24 75 9
