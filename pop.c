#include "monty.h"

/**
 * pop - Removes the top element of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: The line number currently being run.
 *
 * Description: If the stack is empty, prints an error message and exits.
 */
void pop(stack_t **stack, unsigned int line_number)
{
stack_t *temp;

if (*stack == NULL)
{
fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
exit(EXIT_FAILURE);
}

temp = (*stack)->next;
free(*stack);
*stack = temp;
if (*stack != NULL)
(*stack)->prev = NULL;
}

