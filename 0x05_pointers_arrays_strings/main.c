#include "holberton.h"
#include <stdio.h>

/**
 * main- For testing my functions
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int *pt2;
	int *pt;

	a = 100;
	b = 200;
	pt2 = &b;
	pt = &a;
	printf("Value of a: %d  and b: %d\n", a, b);
	swap_int(pt, pt2);
	printf("New value of a: %d and b:%d\n", a, b);

	return (0);
}
