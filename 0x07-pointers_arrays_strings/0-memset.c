#include "holberton.h"

/**
 * _memset- A function that sets memory
 * @s: address for memory to copy
 * @b: byte to copy into memory
 * @n: amount of memory to set
 *
 * Return: A pointer to memory set
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}

