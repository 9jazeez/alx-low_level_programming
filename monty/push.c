#include "monty.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * push- Pushes to stack
 * @stack:Stack
 * @val: Element to push to stack
 *
 * Return: 1 if success 0 otherwise
 */

int push(stack_t *stack, int val)
{
	stack_t *newE;
	stack_t *head;

	newE = malloc(sizeof(stack_t));
	if (newE == NULL)
	{
		printf("Memory Error");
		exit(EXIT_FAILURE);
	}
	
	head = stack;
	newE->n = val;
	newE->prev = NULL;
	if (head == NULL)
	{
		
		newE->next = NULL;
		*stack = newE;
	}

	head->prev = newE;
	newE->next = head;
	*stack = newE;

	return (1);
}

	






