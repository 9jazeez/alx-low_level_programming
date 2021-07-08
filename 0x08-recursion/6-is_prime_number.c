#include "holberton.h"

/**
 * is_prime_number- Function that prints a true or false for prime number
 * @n: Number to get
 *
 * Return: 1 if prime 0 if otherwise
 */
int is_prime_number(int n)
{
	int a;

	if (n == 1)
		return (0);
	else if (n < 0)
		return (0);
	else
	{
		a = is_prime_number2(n, 2);
		if (a == 1)
			return (1);
		else if (a == 0)
			return (0);
	}
}

/**
 * is_prime_number2- Help to check prime
 * @n: number to check
 * @i: number to use
 *
 * Return: 1 0r 0
 */

int is_prime_number2(int n, int i)
{
	if ((n % i) == 0)
	{
		return (0);
	}

	else if (n > i)
	{
		is_prime_number2(n, i--);
		return (1);
	}
}
