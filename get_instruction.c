#include "monty.h"
/**
 ** get_op_func - select the operator
 ** @s: operator to compare.
 **
 ** Return: the fuction.
*/

void (*get_ins(char *s))(stack_t **stack, unsigned int line_number)
{
	instruction_t ins[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};
	int i = 0;

	while (ins[i].opcode != NULL)
	{
		if (strcmp(s, ins[i].opcode) == 0)
			return (ins[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
}