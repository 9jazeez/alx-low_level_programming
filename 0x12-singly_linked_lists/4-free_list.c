#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - Function to free linked list
 * @head: A double pointer
 *
 * Return: Pointer to the list
 */

void free_list(list_t *head)
{
	list_t *node = head;
	list_t *pnext;

	while (node != NULL)
	{	
		pnext = node->next;
		free(&(node->len));
		free(node->str);;
		free(node->next);
		node = pnext;
	}
	free(head);
}
