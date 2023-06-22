#include "monty.h"

/**
 * push - Pushes an integer onto the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the push function is called.
 */
void push(stack_t **stack, unsigned int line_number)
{
	if (argument->n_tokens <= 1 || !(is_number(argument->line_strs[1])))
	{
		free_arg();
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	stack_t *new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		malloc_failed();

	new_node->n = atoi(argument->line_strs[1]);
	new_node->prev = NULL;
	new_node->next = NULL;

	if (argument->stackHead == NULL)
	{
		argument->stackHead = new_node;
	}
	else
	{
		new_node->next = argument->stackHead;
		argument->stackHead->prev = new_node;
		argument->stackHead = new_node;
	}

	argument->stack_length++;
}

/**
 * pall - Prints all the elements in the stack.
 * @stack: Pointer to the stack.
 * @line_number: Line number where the pall function is called.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (argument->stackHead == NULL)
		return;

	(void)stack;
	(void)line_number;

	tmp = argument->stackHead;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
