#ifndef MONTY_BURNS
#define MONTY_BURNS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void free_stack(stack_t *head);
void pall(stack_t **head, unsigned int n);
void push(stack_t **head, unsigned int n);
void (*get_ins(char *s))(stack_t **stack, unsigned int line_number);
void print_error(unsigned int line_number, char *msg);
unsigned int tonum(char *s);
extern unsigned int line_number;
/*monty errors collection*/
void usage_error(void);
void opfile_error(char *file);
void opcode_error(unsigned int line, char *str);
void malloc_error(void);
#endif
