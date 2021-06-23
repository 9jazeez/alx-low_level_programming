#include "holberton.h"

/**
 * jack_bauer - Prints out all the minutes,hours and seconds in a day
 *
 * Return: Return type is void.
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 3; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if (a == 2 && b == 4 && c == 0 && d == 0)
						return;
					else
					{
						_putchar(a + '0');
						_putchar(b + '0');
						_putchar(':');
						_putchar(c + '0');
						_putchar(d + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}

/**
 * hourcount - Count in hours
 *
 * Return: Prints hours
 */
void hourcount(void)
{
	int a;
	int b;

	for (a = 0; a <= 3; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (a != 2 && b != 3)
			{
				_putchar(a + '0');
				_putchar(b + '0');
				_putchar(':');
			}
		}
	}
}

/**
 * minutecount - the function prints out minutes
 *
 * Return: It returns void
 */
void minutecount(void)
{
	int a;
	int b;

	for (a = 0; a <= 5; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			_putchar(a + '0');
			_putchar(b + '0');
			_putchar('\n');
		}
	}
}

