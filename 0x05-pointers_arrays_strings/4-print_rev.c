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
	int c;

	b = *s;
	i = 0;
	while (b != '\0')
	{
		b = *(s + i);
		i++;
	}
	c = i - 2;

	while (c >= 0)
	{
		b = *(s + c);
		_putchar(b);
		--c;
	}
	_putchar('\n');
}
