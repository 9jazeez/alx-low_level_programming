#include "holberton.h"

/**
 * more_numbers- Print multiple numbers from 0-14 ten times
 *
 * Return: returns void
 */
void more_numbers(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			_putchar(b);
		}
		for (c = '0'; c <= '4'; c++)
		{
			_putchar('1');
			_putchar(c);
		}

		_putchar('\n');
	}
}
