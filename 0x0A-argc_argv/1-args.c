#include <stdio.h>
#include "holberton.h"

/**
 * main- Entry point
 * @argc: Command line count
 * @argv: Array of strings in command line argument
 *
 * Return: 0
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
