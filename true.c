#include "monty.h"
/**
 * true - to check if value is true or not
 * @func_name: data name or value given to function
 * Return: 0 on failure and 1 on success
 **/
int true(char *func_name)
{
	char data[][10] = {"push", "pall", "pint", "pop",
					   "swap", "add", "nop", ""};
	unsigned int i;

	for (i = 0; data[i][0] != '\0'; i++)
	{
		if (strcmp(data[i], func_name) == 0)
			return (1);
	}
	return (0);
}
