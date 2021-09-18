#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - Prints elements in a double list
 * @head: A pointer to the dlistint
 *
 * Return: The number of nodes
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h;
	int sum;
	int t;

	h = head;
	sum = 0;
	while (h != NULL)
	{
		t = h->n;
		sum = sum + t;
		h = h->next;
	}
	return (sum);
}
