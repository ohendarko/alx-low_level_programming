#!/bin/bash
gcc -shared -o myprintf.so -fPIC file_1.c
export LD_PRELOAD=./myprintf.so:$LD_LIBRARY_PATH
