#!/bin/bash
gcc -fPIC -c -Wall -pedantic -Werror -Wextra *.c
gcc -shared -fPIC -o liball.so *.o
