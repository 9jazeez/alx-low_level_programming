#include "holberton.h"

/**
 * _strcmp- Compares two strings
 * @s1: Compare first string
 * @s2: Second string
 *
 * Return: int that depicts comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
		if (s1[i] == '\0')
			return (0);
	return (s1[i] - s2[i]);
}
