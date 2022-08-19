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
    if (!check_numb(value))
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
/**
 * pall - prints the elements of a linked list
 * @stack: the pointer to stack's first element
 * @line_number: line of the file being processed.
 * Return: void
 */

void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *ptr;

    (void)line_number;
    if (stack == NULL || *stack == NULL)
        return;
    ptr = *stack;
    while (ptr)
    {
        printf("%d\n", ptr->n);
        ptr = ptr->next;
    }
}
