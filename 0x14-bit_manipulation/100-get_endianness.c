#include "holberton.h"
#include <stdio.h>

/**
 * get_endianness - Check the endian of a systems
 *
 * Return:1 if Big endianess and 0 otherwise
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
