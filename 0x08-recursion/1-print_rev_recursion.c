#include "holberton.h"
#include <stdio.h>
/**
 * _print_rev_recursion- Function that prints strings in reserve
 * @s: Pointer to string to print
 *
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		;
	}
	myrecursion(s, i);
	_putchar('\n');
}

/**
 * myrecursion- Sub function that helps to reverse
 * @s: Strings to reverse
 * @n: Length of reverse
 *
 * Return: Void
 */

void myrecursion(char *s, int n)
{
	if (n <= 0)
	{
		_putchar(*(s + 0));
	}
	else
	{
		_putchar(*(s + n));
		myrecursion(s, (n - 1));
	}
}


