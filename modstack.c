#include "monty.h"
/**
 * queue - changes the mod of the stack FIFO
 * @head: double pointer to head
 * @line: line number global variable
 */
void queue(stack_t **head, unsigned int line)
{
	(void) head;
	(void) line;

	modstack(1);
}
/**
 * stack - changes the mod of the stack LIFO
 * @head: double pointer to head
 * @line: line number global variable
 */
void stack(stack_t **head, unsigned int line)
{
	(void) head;
	(void) line;

	modstack(0);
}

/**
 * modstack - switch the mod of the stack
 * @mod: integer to mod selector
 * Return: -2
 */
int modstack(int mod)
{
	static int modpush;

	if (mod == 0)
		modpush = 0;
	else if (mod == 1)
		modpush = 1;
	else if (mod == 2)
		return (modpush);
	else
		return (-1);
	return (-2);
}
