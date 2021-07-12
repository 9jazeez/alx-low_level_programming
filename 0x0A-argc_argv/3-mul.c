#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main- Entry point
 * @argc: Command line count
 * @argv: Array of strings in command line argument
 *
 * Return: 0
 */

int main(__attribute__ ((unused)) int argc, char **argv)
{
	int a;
	int b;
	int c;

	if ((argc - 1) < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = a * b;
		printf("%d\n", c);
	}
	return (0);
}
