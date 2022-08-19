#include "monty.h"
/**
 * execute_function - to execute function
 * @line: line
 * @line_number: number of the line
 * @stack: stack
 **/
void execute_func(char *line, unsigned int line_num, stack_t **stack)
{
	char *func_name;
	int valid_or_not;

	func_name = strtok(line, " \t\a\n");
	if (func_name != NULL)
	{
		value = strtok(NULL, " \t\a\n");
		valid_or_not = true(func_name);
		if (valid_or_not != VALID)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_num, line);
			free_stack(stack);
			free(line);
			exit(EXIT_FAILURE);
		}
		else
			get_func(func_name, line_num, stack);
	}
}
