#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c[50] = "Holberton";

	for (i = 0; i <= 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
