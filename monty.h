#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
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
 * for stack, queues, LIFO, FIFO
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
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct arg_s - hold variables
 * @stream: File that connects to the stream from file
 * @line: string which will be the line of the text read from the stream
 * 
 * Description: holds variables to be used
 * in different functions of the project
 * also variables that will require
 * memory allocation
*/
typedef struct arg_s
{
	FILE *stream;
	char *line;
} arg_t;

extern arg_t *arguments;

/*Function Prototypes*/
int dprintf(int fd, const char *format, ...);
void get_stream_fail(char *fileName);
void get_stream(char *fileName);
void initialize_args();
void free_arguments();
void validate_args(int argc);
void malloc_fail(void);

#endif
