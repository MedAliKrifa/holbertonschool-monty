#include "monty.h"

/**
 * pint - print the top data
 * @stack: stack given by main
 * @line_num: ammount of lines
 *
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_num)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
