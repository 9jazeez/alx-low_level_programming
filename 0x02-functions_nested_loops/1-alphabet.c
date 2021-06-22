#include "holberton.h"
/**
 * print_alphabet - This function prints alphabet in lowercase
 * on the stdout.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
