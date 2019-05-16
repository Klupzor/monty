#include "monty.h"
unsigned int line_number = 1;
/**
 * free_helper - helper function that frees
 * @buffer: buffer pointer.
 * @fd: file descriptor.
 * @head: pointer to head.
 */
void free_helper(char *buffer, FILE *fd, stack_t *head)
{

	free(buffer);
	fclose(fd);
	free_stack(head);

}
/**
 * main - monty interpreter main function.
 * @argv: arguments.
 * @argc: number of params.
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	FILE *fd;
	size_t len = 0;
	char *buffer = NULL, *token, *op;
	int num;
	stack_t *head = NULL;

	modstack(0);
	if (argc != 2)
		usage_error();
	fd = fopen(argv[1], "r");
	if (!fd)
		opfile_error(argv[1]);
	while (getline(&buffer, &len, fd) != -1)
	{
		op  = strtok(buffer, " \t\n");
		if (op)
		{
			if (op[0] == '#')
				get_ins("#") (&head, line_number);
			else
			{
				token  = strtok(NULL, " \t\n");
				if (strcmp(op, "push") == 0)
				{
					if (isnum(token) == 0 || !token)
					{
						free_helper(buffer, fd, head);
						print_error(line_number, "usage: push integer");
					}
					num = atoi(token);
					get_ins(op) (&head, num);
				}
				else
					get_ins(op) (&head, line_number);
			}
		}
		line_number++;
	}
	free_helper(buffer, fd, head);
	return (0);
}
