#include "holberton.h"

/**
 * factorial- Function that prints the factorial of a number
 * @n: number to find it factorial
 *
 * Return: int the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}


