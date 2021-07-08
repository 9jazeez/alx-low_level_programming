#include "holberton.h"

/**
 * _strlen_recursion- Function gives the  length of a string
 * @s: Pointer to string to find length
 *
 * Return: int (length of string)
 */
int _strlen_recursion(char *s)
{
	int b;
	int i = 0;

	b = count(s, i);
	return (b);
}

/**
 * count- A sub function that help to count recursively
 * @s: String to count
 * @n: Counter from 0
 *
 * Return: int number of string
 */

int count(char *s, int n)
{
	if (*(s + n) == '\0')
	{
		;
	}
	else
	{
		return  (count(s, (n + 1)));
	}

	return (n);
}
