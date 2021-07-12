#include <stdio.h>
#include "holberton.h"

/**
 * main- Entry point
 * @argc: Command line count
 * @argv: Array of strings in command line argument
 *
 * Return: 0
 */

int main(__attribute__ ((unused)) int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
