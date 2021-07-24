#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Function that searches for an integer
 * @array: Array to search from.
 * @size: Size of array
 * @cmp: A function used to perform search
 *
 * Return: -1 for no match or i for index of match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (size <= 0)
	{
		return (-1);
	}
	else if (array != NULL && cmp != NULL)
	{
		while (size > 0)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			size--;
			i++;
		}
	}
	return (-1);
}
