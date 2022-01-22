#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>

/**
 * interpolation_search- A function that uses interpolation search algorithm
 *
 * @size: Size of array.
 * @array: A pointer to the first array element
 * @value: Value to search for.
 *
 * Return: Return the index where value is found
 **/

int interpolation_search(int *array, size_t size, int value)
{
	int low, high, pos;
	int size1;

	size1 = (int)(size);
	if (array == NULL || size1 == 0)
		return (-1);

	low = 0;
	high = size1 - 1;

	while ((array[high] != array[low]) && (value >= array[low]) &&
		(value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]
				)) * (value - array[low]));
		if (value > array[high])
		{
			printf("Value checked array[%i] is out of range", value);
			return (-1);
		}
		printf("Value checked array[%i] = [%i]\n", pos, array[pos]);

		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}
	if (value > array[high])
	{
		printf("Value checked array[%i] is out of range\n", value);
		return (-1);
	}
	printf("Value checked array[%i] = [%i]\n", pos, array[pos]);
	if (value == array[low])
		return (low);
	else
		return (-1);
}
