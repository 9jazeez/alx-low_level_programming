#include "holberton.h"

/**
 * _abs - This function gives the absolute value of any number
 * @i: The number of which absolute value would be returned
 *
 * Return: returns the asolute value of a number.
 */
int _abs(int i)
{
	if (i < 0)
	{
		i *= -1;
		return (i);
	}
	else
		return (i);
}
