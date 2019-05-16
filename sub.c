#include "monty.h"

/**
 * sub - subtracts the top element from the second.
 * @head: double pointer to head node
 * @line: line number
 */
void sub(stack_t **head, unsigned int line)
{
	int val1, val2;
	stack_t *tmp;

	if (count(head) < 2)
		print_error(line, "can't sub, stack too short");

	val1 = (*head)->n;
	val2 = (*head)->next->n;
	(*head)->next->n = val2 - val1;
	(*head)->next->prev = NULL;
	tmp = (*head)->next;

	free(*head);
	*head = tmp;

}
