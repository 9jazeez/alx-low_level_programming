#include "holberton.h"
#include <stddef.h>

/**
 * _strncat- A function that concatenate using n type
 * @dest: First array of char
 * @src: Strings to add to dest
 * @n: The n size of char to be concatenated
 *
 * Return: A pointer pointing to the concat string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int a;

	i = 0;
	j = 0;
	a = n - 1;
	while (dest[i] != '\0')
		i++;
	while ((dest[i++] = src[j++]) != '\0' && a--)
	{
		;
	}

	return (dest);
}
