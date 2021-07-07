#include "holberton.h"

/**
 * _puts_recursion- Function that prints strings
 * @s: Pointer to string to print
 *
 * Return: Void
 */
void _puts_recursion(char *s)
{
	char b = *s++;

	if (b == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(b);
		_puts_recursion(s);
	}
}


