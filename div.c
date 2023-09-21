#include "monty.h"

/**
 * f_div - Divides the second top element of the stack
 * by the top element.
 * @head: Double pointer to the head of the stack.
 * @counter: The line number currently being run.
 *
 * Description: If the stack contains less than two elements,
 * prints an error message and exits. Otherwise, divides
 * the second top element
 * of the stack by the top element. The result is stored in the
 * second top element of the stack, and the top element is removed.
 * If the top element of the stack is 0, prints
 * an error message and exits.
 */
void f_div(stack_t **head, unsigned int counter)
{
int quotient;

if (*head == NULL || (*head)->next == NULL)
{
fprintf(stderr, "L%u: can't div, stack too short\n", counter);
exit(EXIT_FAILURE);
}
if ((*head)->n == 0)
{
fprintf(stderr, "L%u: division by zero\n", counter);
exit(EXIT_FAILURE);
}

quotient = (*head)->next->n / (*head)->n;
pop(head, counter);
(*head)->n = quotient;
}

