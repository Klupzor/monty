#include "monty.h"
/**
 * rotl - rotates the stack to the bottom.
 * @head: double pointer to head node
 * @n: unused parameter
 */
void rotl(stack_t **head, unsigned int n __attribute__((unused)))
{
	stack_t *temp, *prev, *first;

	temp = *head;

	if (temp)
	{
		first = *head;
		temp->next->prev = NULL;
		*head = temp->next;
		while (temp)
		{
			if (!temp->next)
				break;
			temp = temp->next;
		}
		prev = temp;

		printf("final\n");
		first->next = NULL;
		first->prev = prev;
		temp->next = first;

	}
}
