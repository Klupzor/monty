#include "monty.h"
/**
** free_stack - Frees all stack.
** @head: Pointer to head of a list
**/

void free_stack(stack_t *head)
{
	stack_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
