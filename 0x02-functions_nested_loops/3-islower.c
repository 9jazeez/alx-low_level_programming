#include "holberton.h"

/**
 * _islower - A function that checks if a character is lowercased
 *@i: char to check if lower case
 *
 * Return: 1 if lowercase and 0 if otherwise.
 */
int _islower(int i)
{
	int c = 97;

	while (c <= 122)
	{
		if (c != i)
			c++;
		else
			return (1);
	}
	return (0);
}

