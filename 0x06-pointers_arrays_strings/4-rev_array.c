#include "holberton.h"

/**
 * reverse_array- Function that reverses the elements of an array
 * @a: array to be reversed
 * @n: number of elements in array
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n);
{
	int i;
	int t;

	for (i = 0; i <= n / 2; i++)
	{
		t = *(a + i);
		*(a + i) = *(a + (n - i - 1));
		*(a + (n - i - 1)) = t;
	}
	_putchar('\n');
}

