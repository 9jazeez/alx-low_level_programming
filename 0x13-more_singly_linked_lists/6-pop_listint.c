#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - A function that deletes the head of a listint_t
 * and returns the head node's data
 * @head: A pointer to the head pointer to be deleted
 *
 * Return: If list is empty 0 is returned
 */

int pop_listint(listint_t **head)
{
	listint_t *node = *head;
	listint_t *pt = *head;
	int d;

	if (node == NULL)
	{
		return (0);
	}

	else
	{
		d = pt->n;
		node = node->next;
		free(*head);
		*head = node;
		return (d);
	}
}
