#include "holberton.h"

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

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j <= n)
	{
		dest[i++] = src[j++];
	}

	return (dest);
}
