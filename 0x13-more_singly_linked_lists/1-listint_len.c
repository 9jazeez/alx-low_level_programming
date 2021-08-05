#include "lists.h"
#include <stdio.h>

/**
 * listint_len - A function that returns the number of element in a linked list
 * @h: linked list to return element
 *
 * Return: size_t n
 */

size_t listint_len(const listint_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
