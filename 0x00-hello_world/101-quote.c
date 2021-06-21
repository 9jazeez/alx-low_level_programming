#include <stdio.h>
#include <errno.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error value)
 */
int main(void)
{
	int i = 0;
	char c[100] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	while (i < 58)
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');
	return (1);
}
