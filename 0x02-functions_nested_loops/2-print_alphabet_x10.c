#include "holberton.h"

/**
*print_alphabet_x10 - This function prints the alphabets in lowercase ten
*times all in a
*new line on the standard terminal output(stdout)
*
*Return: Void
*/
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}

/**
 * print_alphabet- Prints lower case letters
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
