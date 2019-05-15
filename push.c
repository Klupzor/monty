#include "monty.h"
/**
 * push - function that push a node into the stack
 * @head: double pointer head
 * @n: line number
 */
void push(stack_t **head, unsigned int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
		malloc_error();
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
}
