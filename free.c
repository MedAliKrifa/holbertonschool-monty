#include "monty.h"
/**
 * free_stack - to free stack
 * @stack: stack
 **/
void free_stack(stack_t **stack)
{
	stack_t *ptr, *tmp;

	ptr = *stack;
	while (ptr)
	{
		tmp = ptr;
		ptr = ptr->next;
		free(tmp);
	}
}
