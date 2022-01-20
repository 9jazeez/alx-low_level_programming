#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>
#include <math.h>

/**
 * jump_search- A function that implements jump search algorithm.
 *
 * @array: Pointer to the first element in the array
 * @size: Size of the array
 * @value: Value to search for in array
 *
 * Return: Index of the element equal to the value searched
 **/

int jump_search(int *array, size_t size, int value)
{
	size_t i, step, j;
	step = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (array[step] < value && step < size)
	{
		printf("Value checked array[%ld] = [%i]\n", step, array[step]);
		i = step;
		step += sqrt(size);
		if (i >= size )
		{
			return (-1);
		}
	}

	printf("Value found between indexes [%li] and [%li]\n", i, step);

	if (step > (size - 1))
		step = size - 1;

	for (j = i; j <= step && array[j] <= value; j++)
	{
		printf("Value checked array[%ld] = [%i]\n", j, array[j]);
		if (value == array[j])
			return (j);
	}

	return (-1);
}
