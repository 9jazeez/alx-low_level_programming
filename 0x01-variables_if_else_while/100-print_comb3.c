#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int y;

	for (c = 0; c <= 9; c++)
	{

		for (y = c; y <= 9; y++)
		{
			if (c != y)
			{
				putchar(c + '0');
				putchar(y + '0');
				if (c != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
