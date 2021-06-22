#include "holberton.h"

/**
 * _isalpha - A function that checks if a character is an alphabet
 *@i: char to check if it is an alphabet
 *
 * Return: 1 if lowercase and 0 if otherwise.
 */
int _isalpha(int i)
{
	int c = 65;
	int y = 90;

	for (; y <= 98; y++)
	{
		if (y == i)
			return (0);
	}
	while (c <= 122)
	{
		if (c != i)
			c++;
		else
			return (1);
	}
	return (0);
}

