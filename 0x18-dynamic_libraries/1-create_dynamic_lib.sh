#!/bin/bash
gcc -g -fPIC -Wall -Wextra -Werror -pedantic *.c -shared -o liball.so
