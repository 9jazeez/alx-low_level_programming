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

int _isdigit(char *argv[]);

int main(int argc, char **argv)
{
	int i;
	int a;

	for (i = 1; i < argc - 1; i++)
	{
		if (_isdigit(argv[i]) == 1)
		{
			printf("Error\n");
			return (0);
		}
		else if (_isdigit(argv[i]) == 0)
		{
			printf("Error2\n");
			return (1);
		}
		else
		{
			a += atoi(argv[i]);
		}
	}
	printf("%d\n",a);
	return (0);
}

int _isdigit(char **argv)
{
	int i;
	int a;

	for (i = 0, a = 'a'; i <= 9 || a <= 'Z'; i++, a++)
	{
		if (atoi(*argv[0]) == i)
			return (1);
		else if (atoi(argv[0]) == a)
			return (0);
	}
	return (0);
}
