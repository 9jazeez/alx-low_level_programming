#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('a');
	_putchar(r + '0');
	r = _islower(65);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
