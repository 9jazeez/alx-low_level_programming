#include "holberton.h"

/**
 * *_strcat- This function concatenates two strings or array
 *@dest: string 1 to concate
 *@src: string 2 to concate
 *
 * Return: returns a pointer that points to a concatenated new array
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	char *n;

	i = j = 0;
	while (dest[i] != '\0')
		i++;
	while ((dest[i++] = src[j++]) != '\0')
	{
		;
	}
	n = dest;

	return (n);
}

