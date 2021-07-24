#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of argument
 * @argv: Array of argument
 *
 * Return: result
 */

int main(int argc, char *argv)
{
	int a;
	int b;
	int *c;
	/*char *t;*/

	/*t = &argv[2];*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		c = *get_op_func(argv[2], a, b);
		/*if (**t != "+" || t != "-" || t != "*" || t != "/" || **t != "%")*/
		if (argc == 0)
		{
			printf("Error\n");
			exit(99);
		}
		if (*c == -1)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", *c);
	}
	return (0);
}
