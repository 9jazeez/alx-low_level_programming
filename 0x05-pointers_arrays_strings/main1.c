#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry point for general c testing
 *
 * Return: Returns 0 (successful)
 */
int main(void)
{
	int a, b, c;
	char str1, str2;
	int *pt1;
	char *pt2;
	int *pt3;

	a = b = 20;
	c = 0;
	str1 = 'H';
	str2 = 'h';

	pt1 = &c;
	pt2 = &str1;
	pt3 = pt1;

	printf("Address of a is : %p\n", &c);
	printf("Value of pt1 and pt2 are %d : %c\n", *pt1, *pt2);
	printf("value and address in pt3 %d : %p\n", *pt3,  &b);
	printf("size of pointer and int %lu : %lu \n", sizeof(pt1), sizeof(a));
	return (0);
}



