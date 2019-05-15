#include "monty.h"
/**
 * usage_error - prints usage error msg to stderr
 */
void usage_error(void)
{
	char *msg = "USAGE: monty file";

	fprintf(stderr, "%s\n", msg);
	exit(EXIT_FAILURE);
}

/**
 * opfile_error - prints error if opcode doesn't exits
 * @file: file name
 */
void opfile_error(char *file)
{
	char *msg = "Error: Can't open file";

	fprintf(stderr, "%s %s\n", msg, file);
	exit(EXIT_FAILURE);
}

/**
 * opcode_error - prints opcode error msg to stderr
 * @line: line number
 * @str: string message
 */
void opcode_error(unsigned int line, char *str)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line, str);
	exit(EXIT_FAILURE);
}

/**
 * malloc_error - prints malloc error msg to stderr
 */
void malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
