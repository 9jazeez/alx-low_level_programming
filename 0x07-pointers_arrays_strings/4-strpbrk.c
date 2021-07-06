#include "holberton.h"

/**
 *_strpbrk- A built in like function that behaves like strsbrk
 *@s: String to if it contains a byte or pattern
 *@accept: String with pattern
 *
 *Return: A pointer
 */

char *_strpbrk(char *s, char *accept)
{
	char *b;

	b = 0;
	if (s == 0 || accept == 0)
		return (b);
	while (*s)
	{
		if (_strchr(accept, *s))
		{
			return (s);
		}
		else
			s++;
	}

	return (b);
}
