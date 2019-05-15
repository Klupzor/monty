#include "monty.h"
/**
 * pall - function that prints all the elements of a stack_t list
 * @head: double pointer to head node
 * @n: unused parameter
 */
void pall(stack_t **head, unsigned int n __attribute__((unused)))
{
	stack_t *temp = *head;

	while (temp)
	{
		fprintf(stdout,"%d\n", temp->n);
		temp = temp->next;
	}
}
