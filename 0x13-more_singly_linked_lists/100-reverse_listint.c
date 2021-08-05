#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - A function that reverses a list
 * @head: The list to add a new node to.
 *
 * Return: the address of the first element
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *last = NULL;
	listint_t *nex = NULL;

	tmp = *head;
	while (tmp != NULL)
	{
		nex = tmp->next;
		tmp->next = last;

		last = tmp;
		tmp = nex;

	}
	*head = last;
	return (*head);

}
