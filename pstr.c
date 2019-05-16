#include "monty.h"
/**
 * pstr - prints the char at the top of the stack
 * @head: double pointer to head node
 * @line: line
 */
void pstr(stack_t **head, __attribute__((unused)) unsigned int line)
{
	stack_t *temp = *head;

	if (!temp)
		putchar(10);
	while (temp)
	{
		if (temp->n < 0 || temp->n > 127 || temp->n == 0)
			break;
		fprintf(stdout, "%c", temp->n);
		temp = temp->next;
	}
	putchar(10);
}
