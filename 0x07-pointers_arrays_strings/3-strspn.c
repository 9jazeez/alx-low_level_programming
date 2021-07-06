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
/**
*_strchr- A function that returns a pointer to an occurrance in a string
** @s: String to get
** @c: Char or pattern to find
**
** Return: Apointer
**/

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
	return (s1);
}

