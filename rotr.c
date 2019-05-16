#include "monty.h"
/**
 * rotr - rotates the stack to the bottom.
 * @head: double pointer to head node
 * @n: unused parameter
 */
void rotr(stack_t **head, unsigned int n __attribute__((unused)))
{
	stack_t *temp, *end;

	temp = *head;

	if (temp && count(head) > 1)
	{
		while (temp->next)
		{
			if (!temp->next)
				break;
			temp = temp->next;
		}
		end = temp;
		end->prev->next = NULL;

		end->next = *head;
		(*head)->prev = end;
		end->prev = NULL;

		*head = end;
	}
}
