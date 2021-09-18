#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - Prints elements in a double list
 * @head: A pointer to the dlistint
 * @index: Position of node
 *
 * Return: The number of nodes
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h;

	h = head;
	while (index != 0)
	{
		h = h->next;
		index--;
	}
	return (h);
}
