#!/bin/bash
gcc -Wall -pedantic -Wextra -Werror  -fPIC -c *.c
gcc -shared -o liball.so *.o
