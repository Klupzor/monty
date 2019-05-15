#include "monty.h"
/**
 * pop - removes the top element of the stack
 * @head: double pointer to head node
 * @line: line number
 */
void pop(stack_t **head, unsigned int line)
{
	stack_t *temp;

	if (!*head)
		print_error(line, "can't pop an empty stack");
	temp = *head;
	*head = temp->next;
	free(temp);
}
