#include "monty.h"

/**
 * f_pop - Removes the top element of the stack.
 * @stack: A pointer to the stack.
 * @line_number: The line number in the Monty bytecode file.
 *
 * Description: If the stack is empty, it prints an error message
 * and exits with a failure status.
 */
void f_pop(stack_t **stack, unsigned int line_number)
{
stack_t *temp;

if (*stack == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
exit(EXIT_FAILURE);
}

temp = *stack;
*stack = (*stack)->next;
if (*stack != NULL)
{
(*stack)->prev = NULL;
}
free(temp);
}

