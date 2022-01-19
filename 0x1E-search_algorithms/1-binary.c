#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * binary_search- A function that searches through an array
 * using binary search algorithm
 * @array: Pointer to the first element of the array
 * @size: Size of the array to search from
 * @value: Value to search in array
 *
 * Return: returns the index of the element with the value.
 **/

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t limit, mid, start;

	if (size == 0 || array == NULL)
	{
		return (-1);
	};
	limit = size - 1;
	start = 0;

	while (start <= limit)
	{
		printf("Searching in array:");
		for (i = start; i <= limit; i++)
		{
			printf(" %ld", i);
			if (i != limit)
			{
				printf(",");
			}
		}
		printf("\n");
		mid = (start + limit) / 2;

		if (value > array[mid])
			start = mid + 1;
		else if (value < array[mid])
			limit = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
