#include "holberton.h"

/**
 * print_triangle - Uses # to build a triangular pattern based on size.
 * @size: size of the triangle
 *
 * Return: returns int
 */
void print_triangle(int size)
{
	char c = "#";

	if (size == 0 || size < 0)
		_putchar('\n');
	else
	{
		print_triangle(size);
		while (size > 1)
		{
			_putchar(c);
			size--;
		}
		_putchar('\n');
	}
}
