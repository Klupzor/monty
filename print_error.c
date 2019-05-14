#include "monty.h"

void print_error(char *msg)
{
	write(STDERR_FILENO, msg, strlen(msg));
}
