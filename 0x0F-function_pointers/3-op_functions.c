#include <stdio.h>
/**
 * op_add - Addition function
 * @a: First int to add
 * @b: Second int to add
 *
 * Return: result of addition
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substraction function
 * @a: First int to sub
 * @b: Second int to sub
 *
 * Return: result of substraction
 */

int op_sub(int a, int b)
{
	if (a > b)
	{
		return (a - b);
	}
	else
		return (b - a);
}
/**
 * op_mul - Multiplication function
 * @a: First int
 * @b: Second int
 *
 * Return: result of multilplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division function
 * @a: First int
 * @b: Second int
 *
 * Return: result of division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		return (-1);
	}

	return (a / b);
}

/**
 * op_mod - Modulus function
 * @a: First int
 * @b: Second int
 *
 * Return: result of modulus
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (-1);
	}

	return (a % b);
}
