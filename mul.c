#include "monty.h"

/**
 * mul - multiplies the second top element of the stack by the top element.
 * @head: double pointer to head node.
 * @line: line number.
 */
void mul(stack_t **head, unsigned int line)
{
	int val1, val2;
	stack_t *tmp;

	if (count(head) < 2)
		print_error(line, "can't mul, stack too short");

	val1 = (*head)->n;
	val2 = (*head)->next->n;
	(*head)->next->n = val2 * val1;
	(*head)->next->prev = NULL;
	tmp = (*head)->next;

	free(*head);
	*head = tmp;

}
