#include "monty.h"

void print_error(unsigned int line, char *msg)
{
	fprintf(stderr, "L%u: %s\n", line, msg);
	exit(EXIT_FAILURE);
}
