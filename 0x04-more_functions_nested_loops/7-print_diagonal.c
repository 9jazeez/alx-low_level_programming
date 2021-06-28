#include "holberton.h"

/**
 * print_diagonal- Prints diagonal pattern using \
 *@n: size of diagonal.
 *
 * Return: returns void
 */
void print_diagonal(int n)
{
	int a;
	int b;
	int c = 92;

	if (n < 0 || n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= a; b++)
			{
				_putchar(' ');
			}
			_putchar(c);
			_putchar('\n');
		}
	}
}
