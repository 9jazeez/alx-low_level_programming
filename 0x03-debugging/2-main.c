#include <stdio.h>
#include "holberton.h"

/**
 * main - points the largest of 3 integers
 * Return: 0
 */
int main(void)
{
	int a, b, c;
	int largest;

	a = -97;
	b = -98;
	c = -56;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
