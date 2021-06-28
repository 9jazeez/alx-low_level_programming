#include "holberton.h"

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
