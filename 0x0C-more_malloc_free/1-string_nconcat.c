#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat- Function that concatenates two strings
 * @s1:string to concatenate
 * @s2:strings 2 to concatenate
 * @n:Byte to concatenate
 *
 * Return: Void *(pointer to all) if fails termination of process
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i;
	unsigned int j;
	unsigned int len1;
	unsigned int len2;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	p = malloc(sizeof(s1) + sizeof(s2) + n);
	if (p == NULL)
	{
		exit(98);
	}

	else if (n > len2)
	{
		while (*s2 != '\0')
		{
			if (*s1 == '\0')
			{
				p = " ";
			}
			/**p = *s1;*/
			*(p + (len1++)) = *s2; 
			s1++;
			p++;
			s2++;
		}
		/*p = '\0';*/
	}
	else if (n < len2)
	{
		for (i = 0; *s1 != '\0'; i++)
		{
			*(p + i) = *s1;
			s1++;
		}
		/*p = " ";*/
		for (j = 0; j <= n; j++)
		{
			*(p + ( i + j)) = *s2;
			s2++;
		}
		/*p = '\0';*/
	}
	else
		p = NULL;
	return (p);
}

unsigned int _strlen(char *s)
{
	unsigned int i;
	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
