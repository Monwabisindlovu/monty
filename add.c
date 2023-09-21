#include "monty.h"

/**
 * add - Adds the top two elements of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: The line number currently being run.
 *
 * Description: If the stack contains less than two elements, 
 * prints an error message and exits. Otherwise,
 * adds the top two elements
 * of the stack. The result is stored in the second top
 * element of the stack,
 * and the top element is removed.
 */
void add(stack_t **stack, unsigned int line_number)
{
int sum;

if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
exit(EXIT_FAILURE);
}

sum = (*stack)->n + (*stack)->next->n;
pop(stack, line_number);
(*stack)->n = sum;
}

