#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - A function that converts binary to decimal
 * @s: Number to give binary representation
 *
 * Return: 1 if operation was successful or 0 otherwise.
 */

unsigned int binary_to_uint(const char *s)
{

	const char *last;
	const char *t = s;
	unsigned int base = 1;
	unsigned int val;
	char f;
	int i, c;

	if (s == NULL)
		return (0);

	for (i = 0; *s != '\0'; i++)
		s++;

	val = 0;
	last = t + (i - 1);
	for (c = 0; c <= i; c++)
	{
		for (f = 'a'; f < 'z'; f++)
		{
			if (f == *last)
			{
				return (0);
			}
		}

		if (*last == '1')
			val += 1 * base;
		else if (*last == '0')
		{
			val += 0 * base;
		}
		base = base * 2;
		last--;
	}
	return (val);
}

