#include "holberton.h"

/**
 * _pow_recursion- Function that prints strings
 * @x: Number to raise by a certain power
 * @y: Power or superscript of the number
 *
 * Return: Result of indices
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}


