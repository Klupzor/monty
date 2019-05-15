#include "monty.h"
/**
 * pint - prints the value at the top of the stack.
 * @head: double pointer to head node
 * @line: opcode line
 */
void pint(stack_t **head, unsigned int line)
{
	stack_t *temp = *head;

	if (temp)
		fprintf(stdout, "%d\n", temp->n);
	else
		print_error(line, "can't pint, stack empty");

}
