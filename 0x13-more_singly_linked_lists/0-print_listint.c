#include <stdio.h>
#include "lists.h"

/**
 * print_listint - A function that prints listint_t
 * @h: listint_t list to  print
 *
 * Return: number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
