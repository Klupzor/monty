#include "monty.h"

/**
 * main - monty interpreter main function.
 * @argv[1]: path of file to be proccessed
 * @letters: number of letters to be read and printed
 * Return: Always 0.
 */
unsigned int line_number = 1;
int main(int argc __attribute__((unused)), char **argv)
{
	FILE *fd;
	ssize_t print;
	size_t len = 0;
	char *buffer = NULL;
	char *token, *op;
	int num;
	stack_t *head = NULL;

	if (!argv[1])
		return (0);
	fd = fopen(argv[1], "r");
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
