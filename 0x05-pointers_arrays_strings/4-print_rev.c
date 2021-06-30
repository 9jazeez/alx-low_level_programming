#include "holberton.h"

/**
 * print_rev - This function prints the string in reverse
 * @s: String to print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	char b;

	b = *s;
	i = 0;
	while (b != '\0')
	{
		b = *(s + i);
		i++;
	}

	while (i >= 0)
	{
		b = *(s + i);
		_putchar(b);
		--i;
	}
	_putchar('\n');
}
