#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a node to the end of the list
 * @head: A double pointer
 * @str: String to copy
 *
 * Return: Pointer to the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *tmp2;
	list_t *last;
	size_t len;
	char *s;

	s = strdup(str);
	for (len = 0; *s != '\0'; len++)
		s++;
	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
	{
		return (NULL);
	}

	else
	{
		
		tmp->str = strdup(str);
		tmp->len = len;
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
	tmp2 = *head;
	return (tmp2);
}
