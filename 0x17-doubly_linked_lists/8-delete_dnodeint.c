#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - A function that deletes at index
 * @head: A double pointer to the linked list
 * @index: Position to delete node from
 *
 * Return: 1 if successful and -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *start;
	dlistint_t *tmp;
	dlistint_t *tmp2;
	unsigned int i;

	start = *head;
	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		if (start->next == NULL)
		{
			free(start);
			*head = NULL;
			return (1);
		}
		else
		{

			tmp = start;
			start = start->next;
			free(tmp);
			start->prev = NULL;
			*head = start;
		}
	}

	else
	{

		for (i = 0; i < (index - 1); i++)
		{
			if (start == NULL)
			{
				return (-1);
			}
			start = start->next;
		}
		tmp = start;
		start = start->next;
		tmp2 = start;
		start = start->next;
		free(tmp2);
		tmp2 = NULL;
		tmp->next = start;
		start->prev = tmp;
	}

	return (1);
}
