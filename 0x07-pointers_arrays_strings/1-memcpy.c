#include "holberton.h"

/**
 * _memcpy- A function that copys from a string to another
 * @dest: Destination
 * @src: Sorce
 * @n: number of byte
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
