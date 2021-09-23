#!/bin/bash
gcc -g -fPIC -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -shared -o liball.so

