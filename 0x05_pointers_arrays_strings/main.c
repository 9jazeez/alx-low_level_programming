#include "holberton.h"
#include <stdio.h>

/**
 * main- For testing my functions
 *
 * Return: 0
 */
int main(void)
{
	char *a;
	int c;

	a = "Holberton is a good coding school";
	printf("Value of a: %s\n", a);
	c = _strlen(a);
	printf("Length of a: %d\n", c);

	return (0);
}
