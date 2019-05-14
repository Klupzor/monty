#include "monty.h"
void pall(stack_t **head, unsigned int n)
{
	(void) n;
	size_t count = 0;
	stack_t *temp = *head;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
}
