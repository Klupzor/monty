#include "monty.h"
/**
 * push - function that push a node into the stack
 * @head: double pointer head
 * @n: line number
 */
void push(stack_t **head, unsigned int n)
{
	stack_t *new_node, *end;

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
		malloc_error();

	new_node->n = n;
	if (modstack(2) == 0)
	{
		new_node->next = *head;
		new_node->prev = NULL;
		if (*head)
			(*head)->prev = new_node;
		*head = new_node;
	}
	if (modstack(2) == 1)
	{
		end = *head;
		new_node->next = NULL;
		if (!end)
		{
			new_node->prev = end;
			*head = new_node;
		}
		else
		{
			while (end->next)
			{
				if (!end->next)
					break;
				end = end->next;
			}
			end->next = new_node;
			new_node->prev = end;
		}
	}

}
