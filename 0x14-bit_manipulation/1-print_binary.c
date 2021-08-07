#include "main.h"
#include <stdio.h>

/**
 * print_binary - A function that changes bit to 0 at a particular index
 * @n: Number to give binary representation
 *
 * Return: 1 if operation was successful or 0 otherwise.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n / 2);
	}

	printf("%ld", n % 2);
}

