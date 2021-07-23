#include "function_pointers.h"
#include <stdio.h>

void printn(char *s)
{
	printf("%s\n", s);
}

int main(void)
{
	print_name("Hammed", printn);
	return (0);
}
