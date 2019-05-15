#include "monty.h"
/**
 * print_error - function that prints error msg to stderr
 * @line: line number
 * @msg: string message
 */
void print_error(unsigned int line, char *msg)
{
	fprintf(stderr, "L%u: %s\n", line, msg);
	exit(EXIT_FAILURE);
}
