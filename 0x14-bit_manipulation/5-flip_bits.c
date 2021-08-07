#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Function that returns number of bit need to flip
 * @n: First value
 * @m: Second value
 *
 * Return: unsigned int of number of needed flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c;

	c = 0;
	n = (n ^ m);
	while (n > 0)
	{
		c++;
		n &= (n - 1);
	}

	return (c);
}
