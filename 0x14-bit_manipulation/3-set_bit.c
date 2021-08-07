#include "main.h"
#include <stdio.h>

/**
 * set_bit - A function that changes bit to 0 at a particular index
 * @n: The bit that would be manipulated
 * @index: Position to set bit
 *
 * Return: 1 if operation was successful or 0 otherwise.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*n |= 1 << index;
	if (*n)
	{
		return (1);
	}
	else
		return (-1);
}

