#include "monty.h"
/**
 * rotl - rotates the stack to the bottom.
 * @head: double pointer to head node
 * @n: unused parameter
 */
void rotr(stack_t **head, unsigned int n __attribute__((unused)))
{
	stack_t *temp, *end, *first, *aux;

	temp = *head;

	if (temp && count(head) > 1)
	{
		first = *head;
		temp = temp->next;
		printf("inicio ciclo\n");
		while (temp->next)
		{
			if (!temp->next)
				break;
			aux = temp->next;
			temp->next = temp->prev;
			temp->prev = aux;
			printf("node: %d\n", temp->n);
			temp = temp->next;
		}
		end = temp;
		printf("asignando finales\n");
		end->next = end->prev;
		end->prev = NULL;

		first->prev = first->next;
		first->next = NULL;

		*head = end;
	}
}
