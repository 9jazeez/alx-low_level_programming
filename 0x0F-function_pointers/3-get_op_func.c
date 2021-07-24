#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - Function that gets what operation to perform
 * @s: Pointer to char of symbol
 *
 * Return: pointer to a function or NULL
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (s == ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}


