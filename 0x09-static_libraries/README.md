# Static Libraries In C

**This directory contains solution to tasks on the creaction and uses of**
**Static libraries in C programming language on UNIX like operating systems**

## C Libraries

**A library is a file containing several objects(codes that defines functions**
**,varaibles, and othres that might be reused several times) files, that can**
**be usedas a single entity in a linking phase of a program.**

**A Static library is a collection of object files that are linked into the program during the linking phase of compilation and are not relevant during runtime.**

**While Shared library on the other hand has two stages of interacting with the program.**
**Firstly, during compilation where it checks if all needed objects are present but not linking yet. And secondly when the programs starts where it links the address of the objects needed by the program.**

## libholberton.a

**This file contains all objects that might be needed by our program. It contains function files like _putchar()_ and others.**

## create_static_lib.sh

**This is a bash file that contians script to create a static library called liball.a**

**Syntax used for archiving files used for static library is given below**

`ar -rc liball.a util_file1.o util_file2.o util_file3.o`

`ranlib liball.a` 
