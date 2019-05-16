#include "monty.h"
/**
 * pchar - prints the char at the top of the stack
 * @head: double pointer to head node
 * @line: line
 */
void pchar(stack_t **head, unsigned int line)
{
	stack_t *temp = *head;
	int num;

	num = temp->n;
	if (!temp)
		print_error(line, "can't pchar, stack empty");
	if (num < 0 || num > 127)
		print_error(line, "can't pchar, value out of range");
	else
		fprintf(stdout, "%c\n", num);
}
