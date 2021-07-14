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


int main(int argc, char *argv[])
{
	int i;
	int a;
	int b;

	if (argc <= 1)
	{
		printf("%d\n", 0);
	}
	else if (isnotdigit(argc, argv))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			b = atoi(argv[i]);
			a = a + b;
		}
		printf("%d\n", a);
	}
	return (0);

}

/**
 * check-Checks if it is digit or not
 * @pt:Item to check
 *
 * Return: 1 or 0
 */

int check(char *pt)
{
	int a;
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (pt[0] == i)
		{

			a = 1;
			break;
		}

		else
			a = 0;
	}
	return (a);
}

/**
 * isnotdigit- Checks if a string is a not a digit
 * @argc: number of commands to check from
 * @argv: Arrays of command
 *
 * Return: 1 if not a digit and 0 otherwise
 */

int isnotdigit(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		if (check(argv[i]))
		{
			return (1);
		}
	}
	return (0);
}
