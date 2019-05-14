#include "monty.h"

size_t pall(stack_t *head)
{
	size_t count = 0;

	if (!head)
		return (0);
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}
	return (count);
}


stack_t *push(stack_t *head, int n)
{
	dlistint_t *new_node;

	if (!head)
		return (0);
	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		free(new_node);
		return (0);
	}
	new_node->n = n;
	new_node->next = head;
	new_node->prev = NULL;
	if (head)
		head->prev = new_node;
	head = new_node;
	return (new_node);
}
/**
 * read_textfile - reads a text file and prints to the POSIX stout.
 * @argv[1]: path of file to be proccessed
 * @letters: number of letters to be read and printed
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	FILE *fd;
	ssize_t print;
	size_t len = 0;
	char *buffer = NULL;
	char *token;
	stack_t *head = NULL;

	if (!argv[1])
		return (0);
	fd = fopen(argv[1], "r");
	while ((print = getline(&buffer, &len, fd)) != -1)
	{
		printf("size: %zu\n", print);
		token = strtok(buffer, " \t\n");
		while (token)
		{
			printf("%s\n", token);
			token = strtok(NULL, " \t\n");
		}
	}

	fclose(fd);
	free(buffer);
	return (0);
}
