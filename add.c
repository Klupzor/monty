#include "monty.h"

/**
 * add - adds the top two elements of the stack.
 * @head: double pointer to head node
 * @line: line number
 */
void add(stack_t **head, unsigned int line)
{
	int val1, val2;
	stack_t *tmp;

	if (count(head) < 2)
		print_error(line, "can't add, stack too short");

	val1 = (*head)->n;
	val2 = (*head)->next->n;
	(*head)->next->n = val1 + val2;
	(*head)->next->prev = NULL;
	tmp = (*head)->next;

	free(*head);
	*head = tmp;

}
