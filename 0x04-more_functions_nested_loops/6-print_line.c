#include "holberton.h"

/**
 * print_line - Prints a line using __
 * @size: This is the required length of the line
 *
 * Return: returns void
 */
void print_line(int size)
{
	int a;

	if (size < 0 || size == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a <= size; a++)
			_putchar('_');
	}
	_putchar('\n');
}
