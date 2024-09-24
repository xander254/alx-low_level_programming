#!/bin/bash
gcc -shared -fPIC srand.c rand.c -o randgen.so
LD_PRELOAD=$PWD/randgen.so ./gm 9 8 10 24 75 9
