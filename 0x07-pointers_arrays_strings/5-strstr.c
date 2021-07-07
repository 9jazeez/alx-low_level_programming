#include "holberton.h"

/**
 * _strstr- A function with same functionality as the inbuilt strstr
 * @haystack: String to check for occurrence
 * @needle: String to use as pattern
 *
 * Return: A pointer to pattern found
 */

char *_strstr(char *haystack, char *needle)
{
	char *b = haystack;
	int c;
	int len;

	len = _strlen(needle);
	for (; (b = _strchr(haystack, *needle)) != 0; haystack++)
	{
		if (b != 0)
		{
			c = _strncmp(b, needle, len);
			if (c == 0)
			{
				return (b);
			}
		}
		else
			return (0);
	}
	return (b);
}


/**
 * _strncmp- Compares two strings
 * @s1: Compare first string
 * @s2: Second string
 * @n: lengthof comparison
 *
 * Return: int that depicts comparison
 */

int _strncmp(char *s1, char *s2, int n)
{
	int i;

	for (i = 0; s1[i] == s2[i] && i < n; i++)
		if (s1[i] == '\0')
			return (0);
	return (s1[i] - s2[i]);
}


/**
 * _strlen- A function that gives the length of a string
 * @s: Pointer pointing to string to get the length
 *
 * Return: Returns the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}


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
