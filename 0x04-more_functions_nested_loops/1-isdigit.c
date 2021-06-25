#include "holberton.h"

/**
 * _isdigit - This function checksif a character is a digit
 * @i: The character to check
 *
 * Return: returns  1 if a digit and 0 otherwise
 */
int _isdigit(int i)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c == i)
		{
			return (1);
		}
		else
			return (0);
	}
}
