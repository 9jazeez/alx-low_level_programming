#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a node tothe list
 * @head: A double pointer
 * @str: String to copy
 *
 * Return: Pointer to the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *tmp2;
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
		tmp->next = *head;
		*head = tmp;
	}
	tmp2 = *head;
	return (tmp2);
}
