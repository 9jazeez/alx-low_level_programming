#include "holberton.h"
/**
 * _strchr- A function that returns a pointer to an occurrance in a string
 * @s: String to get
 * @c: Char or pattern to find
 *
 * Return: Apointer
 */

char *_strchr(char *s, char c)
{
	int i;
	char *s1;
	char b;

	i = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		b = *(s + i);
		if (b == c)
		{
			s1 = &(s[i]);
			break;
		}
		else
		{
			s1 = 0;
		}
	}
	return ((char *)s1);
}
