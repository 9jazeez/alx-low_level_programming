#include "holberton.h"

/**
 * times_table - Function that gives result of multiplication table
 *
 * Return: Void
 */
void times_table(void)
{
	int a = 0;
	int b = 0;
	int c;

	while (a <= 9)
	{
		while (b <= 9)
		{
			c = a * b;
			_putchar(c + '0');
			_putchar(',');
			if (c > 9)
				_putchar(' ');
			else
			{
				_putchar(' ');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
	a++;
}
