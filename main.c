#include "monty.h"

unsigned int line_number = 1;

/**
 * main - monty interpreter main function.
 * @argv: arguments.
 * @argc: number of params.
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	FILE *fd;
	ssize_t print;
	size_t len = 0;
	char *buffer = NULL;
	char *token, *op;
	int num;
	stack_t *head = NULL;

	if (argc != 2)
		usage_error();
	fd = fopen(argv[1], "r");
	if (!fd)
		opfile_error(argv[1]);
	while ((print = getline(&buffer, &len, fd)) != -1)
	{
		op  = strtok(buffer, " \t\n");
		token  = strtok(NULL, " \t\n");

		if (strcmp(op, "push") == 0)
		{
			num = tonum(token);
			if (num == -1)
			{
				free(buffer);
				fclose(fd);
				free_stack(head);
				print_error(line_number, "usage: push integer");
			}
		}
		else
		{
			num = 0;
		}
		get_ins(op) (&head, num);
		line_number++;
	}
	fclose(fd);
	free(buffer);
	free_stack(head);
	return (0);
}
