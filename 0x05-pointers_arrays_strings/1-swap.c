#include "holberton.h"

/**
 * swap_int- This function swaps the values of its arguments
 * @a: one of the parameter to swap
 * @b: second parameter to swap to a
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
