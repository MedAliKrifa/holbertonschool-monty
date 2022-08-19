#include "monty.h"
/**
 * get_func - to get function from data
 * @func_name: function name
 * @line_number: number of the line
 * @stack: stack
 **/
void get_func(char *func_name, unsigned int line_num, stack_t **stack)
{
	instruction_t code[] = {{"push", push}, {"pall", pall}, {"pop", pop}, {"pint", pint}, {"swap", swap},  {NULL, NULL}};
	unsigned int i;

	for (i = 0; code[i].opcode != NULL; i++)
	{
		if (strcmp(code[i].opcode, func_name) == 0)
		{
			code[i].f(stack, line_num);
		}
	}
}
