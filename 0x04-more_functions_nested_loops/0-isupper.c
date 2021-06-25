#include "holberton.h"

/**
 * _isupper - Checks if a chsracter is uppercase or otherwise
 * @i: character to check
 *
 * Return: Returns 1 if uppercase and 0 if otherwise
 */
int _isupper(int i)
{
	int c;

	for (c = 65; c <= 90; c++)
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
}
