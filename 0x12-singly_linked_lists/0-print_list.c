#include "lists.h"
#include <stdio.h>

/**
 * print_list - Function that prints the list in list_t struct
 * @h: Pointer to the list to print
 *
 * Return: 1 if list is present and null otherwise
 */

size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			n++;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
