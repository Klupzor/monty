#include "monty.h"

/**
 * read_textfile - reads a text file and prints to the POSIX stout.
 * @argv[1]: path of file to be proccessed
 * @letters: number of letters to be read and printed
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	unsigned int line_number = 0;
	FILE *fd;
	ssize_t print;
	size_t len = 0;
	char *buffer = NULL;
	char *token, *op;
	unsigned int num;
	stack_t *head = NULL;

	if (!argv[1])
		return (0);
	fd = fopen(argv[1], "r");
	while ((print = getline(&buffer, &len, fd)) != -1)
	{
		op  = strtok(buffer, " \t\n");
		token  = strtok(NULL, " \t\n");
		if (!token)
			num = 0;
		else
			num = atoi(token);
		get_ins(op) (&head, num);
		line_number++;
	}

	fclose(fd);
	free(buffer);
	return (0);
}
