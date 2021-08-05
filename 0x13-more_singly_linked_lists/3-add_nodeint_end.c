#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - A function that adds a node to the end of a list
 * @head: The list to add a new node to.
 * @n: A member of a list element
 *
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *last;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}

	else 
	{
		
		tmp->n = n;
		tmp->next = NULL;
		if (*head == NULL)
		{
			*head = tmp;
		}
	
		else
		{
			last = *head;
			while (last->next != NULL)
			{
				last = last->next;
			}

			last->next = tmp;
		}
	}
	return (tmp);
}
