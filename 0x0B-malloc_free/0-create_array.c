#include "holberton.h"
#include <stdio.h>

char *create_array(unsigned int size, char c)
{
	int i;
	char *d;

	d = malloc(sizeof(c) * size);
	if (d == NULL)
	{
		return (NULL);
	}
	else if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= (size - 1); i++)
		{
			d[i] = c;
		}
		d[size] = '\0';
	}

	return (d);
}
