#include <stdio.h>
#include "variadic_functions.h"

int main(void)
{
	int s;

	s = sum_them_all(4,20,200,3,30);
	printf("%d\n", s);
	s = sum_them_all(2,29,10);
	printf("%d\n", s);

	return (0);
}
