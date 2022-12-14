#include "monty.h"

/**
* pop - pops the very top
* @stack: stack given by main
* @line_cnt: line number for error messages
*
* Return: void
*/
void pop(stack_t **stack, unsigned int line_cnt)
{
	stack_t *tmp = NULL;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_cnt);
		exit(EXIT_FAILURE);
		return;
	}

	tmp = (*stack)->next;
	free_stack(stack);
	*stack = tmp;
	if (!*stack)
		return;
	(*stack)->prev = NULL;
}
