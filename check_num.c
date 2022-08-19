
#include "monty.h"
/**
 * check_numb - checks if data is only composed of digits
 * @value: string to check
 * Return: 0 on failure or 1 on success
 */
int digits(char *value)
{
	unsigned int i;

	if (value == NULL)
		return (0);
	for (i = 0; value[i] != '\0'; i++)
	{
		if (value[0] == '-' && i == 0)
			continue;
		if (isdigit(value[i]) == 0)
			return (0);
	}
	return (1);
}
