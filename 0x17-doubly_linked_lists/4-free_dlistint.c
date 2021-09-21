#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dlistint - Function to free a dlistint
 * @head: Linked list to free(delete)
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
		tmp = NULL;
	}
}

