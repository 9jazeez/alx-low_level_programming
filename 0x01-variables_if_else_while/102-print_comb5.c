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
	int d;
	int x;
	int z;

	for (c = 0; c <= 9; c++)
	{
		for (d = 0; d <= 9; d++)
		{
			for (x = 0; x <= 9; x++)
			{
			for (z = x + 1; z <= 9; z++)
			{
				putchar(c + '0');
				putchar(d + '0');
				putchar(' ');
			}
			putchar(' ');
				putchar(x + '0');
				putchar(z + '0');
				if (c != 9 && d != 9)
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
