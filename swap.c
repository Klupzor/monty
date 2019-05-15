#include "monty.h"
/**
 * count - check the length of the stack
 * @head: double pointer to head of the list
 * Return: number of nodes
 */
int count(stack_t **head)
{
	int count = 0;
	stack_t *temp = *head;

	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}

/**
 * swap - swaps top 2 elements of the stack
 * @head: double pointer to head node
 * @line: line number
 */
void swap(stack_t **head, unsigned int line)
{
	int val1, val2;

	if (count(head) < 2)
		print_error(line, "can't swap, stack too short");

	val1 = (*head)->n;
	val2 = (*head)->next->n;
	(*head)->n = val2;
	(*head)->next->n = val1;
}
