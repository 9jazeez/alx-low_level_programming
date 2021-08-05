#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - A function that adds a node to the beginning of a list
 * @head: The list to add a new node to.
 * @n: A member of a list element
 *
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = (listint_t *)malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}

	tmp->n = n;
	tmp->next = *head;
	*head = tmp;

	return (*head);
}
