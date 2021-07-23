#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - A function that prints a name
 * @name: name to print
 * @f: function that helps to prints
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

