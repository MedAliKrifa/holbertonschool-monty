#include "monty.h"
/**
 * push - add node at the end of double linked list.
 * @stack: pointer to the first node
 * @line_number: data to populate the node
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;

	(void)line_number;

	if (stack == NULL)
		return;
	if (!digits(value))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	new->n = atoi(value);
	new->prev = NULL;
	new->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;
}
