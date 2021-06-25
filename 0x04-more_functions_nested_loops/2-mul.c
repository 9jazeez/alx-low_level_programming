#include "holberton.h"

/**
 * mul - This function takes two integers and returns their product
 * @a: First parameter to multiply
 * @b: Second parameter to multiply
 *
 * Return: product of a and b
 */
int mul(int a, int b)
{
	int c;

	for (c = 0; c <= b; c++)
	{
		a += a;
	}
	return (a);
}
