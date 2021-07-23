#include <stdio.h>

/**
 * array_iterator - A function that executes a function given as a parameter
 * @arr: Array to work with
 * @size: Size of the array
 * @action: A pointer to function that performs action
 *
 * Return: Void
 */

void array_iterator(int *arr, size_t size, void (*action)(int))
{
	int i;

	i = 0;
	if (size != NULL)
	{
		while (size != 0)
		{
			if (action != NULL)
			{
				action(arr[i]);
			}
			else
			{
				;
			}
			i++;
			size--;
		}
	}
}
