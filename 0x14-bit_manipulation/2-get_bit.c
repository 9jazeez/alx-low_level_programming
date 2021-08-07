#include "main.h"
#include <stdio.h>

/**
 * get_bit - A function that changes bit to 0 at a particular index
 * @n: The bit that would be manipulated
 * @index: Position to set bit
 *
 * Return: 1 if operation was successful or -1 otherwise.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int t;

	if (n)
	{
		t = (n >> index) & 1;
		return (t);
	}
	else
		return (-1);

}

