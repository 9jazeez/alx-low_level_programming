#include "holberton.h"

/**
 * print_triangle - Uses # to build a triangular pattern based on size.
 * @size: size of the triangle
 *
 * Return: returns int
 */
void print_triangle(int size)
{
	int c;
	int b;
	int s;
	int t;

	c = 35;
	if (size == 0 || size < 0)
		_putchar('\n');
	else
	{
		for (b = 0; b <= size; b++)
		{
			for (t = size; t >= b; t--)
				_putchar(' ');
			for (s = 0; s <= b; s++)
			{
				_putchar(c);
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
