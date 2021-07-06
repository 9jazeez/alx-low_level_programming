#include "holberton.h"

/**
 *_strspn- A built in like function that behaves like strspn
 *@s: String to if it contains a byte or pattern
 *@accept: String with pattern
 *
 *Return: An unsigned int of byte
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;

	n = 0;
	if (s == 0 || accept == 0)
		return (n);
	while (*s && _strchr(accept, *s++))
		n++;
	return (n);
}
