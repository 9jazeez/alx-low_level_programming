#include <stdio.h>
#include <errno.h>

/**
 *
 * main - Entry point
 *
 * Return: Always 1 (Error value)
 */
int main(void)
{ 
int i = 0;
char c[100] = "and that piece of art is useful\" - Dora Korpar, 20i5-10-19\n";
while(i < 57)
{
putchar(c[i]);
i++;
}
return (0);
}
