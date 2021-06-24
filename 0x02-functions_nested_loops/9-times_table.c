#include "holberton.h"

/**
 * times_table - Function that gives result of multiplication table
 *
 * Return: Void
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c == 0)
				_putchar(c + '0');
			else
				digits(c);
			_putchar(',');
			if (c > 9)
				_putchar(' ');
			else
			{
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

/**
 * digits - print the digits  in a number
 * @n: The number that digits are to be printed
 *
 * Return: Returns void
 */

void digits(int n)
{
	if (n != 0)
	{
		digits(n / 10);
		_putchar(n % 10 + '0');
	}
}
