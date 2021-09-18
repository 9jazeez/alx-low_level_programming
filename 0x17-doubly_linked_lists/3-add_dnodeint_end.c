#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - Prints elements in a double list
 * @head: linked list head
 * @n: A data in list
 *
 * Return: A pointer to the list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n1;
	dlistint_t *last;
	dlistint_t *start;

	last = *head;
	start = *head;
	n1 = malloc(sizeof(dlistint_t));
	if (n1 == NULL)
	{
		printf("Memory issues");
		return (NULL);
	}
	n1->n = n;
	n1->next = NULL;

	if (*head == NULL)
	{
		n1->prev = NULL;
		*head = n1;
		return (n1);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = n1;
	n1->prev = last;
	*head = start;

	return (start);
}
