#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - Prints elements in a double list
 * @head: linked list head
 * @n: A data in list
 *
 * Return: A pointer to the list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n1;

	n1 = malloc(sizeof(dlistint_t));
	if (n1 == NULL)
	{
		printf("Memory issues");
		return (NULL);
	}
	n1->n = n;
	n1->next = (*head);
	n1->prev = NULL;

	if (*head == NULL)
	{
		*head = n1;
	}
	(*head)->prev = n1;
	*head = n1;

	return (n1);
}
