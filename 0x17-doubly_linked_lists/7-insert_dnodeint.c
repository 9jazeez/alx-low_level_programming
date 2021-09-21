#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Prints elements in a double list
 * @head: linked list head
 * @idx: Index for adding new node
 * @n: A data in the node t be added
 *
 * Return: A pointer to the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head,unsigned int idx, int n)
{
	dlistint_t *n1;
	dlistint_t *last;
	dlistint_t *tmp;
	unsigned int i;

	last = *head;
	n1 = malloc(sizeof(dlistint_t));
	if (n1 == NULL)
	{
		printf("Memory issues");
		return (NULL);
	}
	n1->n = n;

	if (*head == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < idx; i++)
	{
		if (last == NULL)
		{
			return (NULL);
		}

		tmp = last;
		last = last->next;
	}

	tmp->next = n1;
	n1->next = last;
	n1->prev = tmp;

	return (n1);
}
