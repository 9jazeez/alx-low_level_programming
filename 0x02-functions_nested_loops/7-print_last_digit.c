#include "holberton.h"

/**
 * print_last_digit - prints the last digit on to the stdout
 * @n: Number to print last digit
 *
 * Return: returns the last digit of the number
 */
int print_last_digit(int n)
{
	int c;

	c = n % 10;
	_putchar(c + '0');
	return (1);
}
