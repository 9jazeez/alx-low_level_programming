#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - Function to free linked list
 * @head: A double pointer
 *
 * Return: Pointer to the list
 */

void free_listint2(listint_t **head)
{
	listint_t *node = *head;
	listint_t *pnext;

	while (node != NULL)
	{
		pnext = node->next;
		free(node);
		node = pnext;
	}
	free(node);
	*head = NULL;
}
