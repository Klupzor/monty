#include "monty.h"
/**
 * get_ins - select the operator from stucture
 * @s: word to be compare in stucture.
 * Return: void
 */

void (*get_ins(char *s))(stack_t **stack, unsigned int line_number)
{
	instruction_t ins[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", divide},
		{"mul", mul},
		{"mod", mod},
		{"#", nop},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{NULL, NULL}
	};
	int i = 0;

	while (ins[i].opcode != NULL)
	{
		if (strcmp(s, ins[i].opcode) == 0)
			return (ins[i].f);
		i++;
	}
	opcode_error(line_number, s);
	return (0);
}
