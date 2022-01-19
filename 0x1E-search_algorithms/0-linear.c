#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>

/**
* linear_search- A function that searches for a value in an array
* @array: Pointer to the first element of the array to search
* @size: size of the array
* @value: value to search for in array
*
* Return: The index that contains the value
**/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (size == 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
