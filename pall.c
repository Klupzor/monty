#include "monty.h"
void pall(stack_t **head, unsigned int n __attribute__((unused))) 
{
	stack_t *temp = *head;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
