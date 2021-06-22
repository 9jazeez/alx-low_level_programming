#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[50] = "Hello Holberton School";
	int i;

	for (i = 0; i <= 30; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
