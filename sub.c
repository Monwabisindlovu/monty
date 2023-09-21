#include "monty.h"

/**
 * f_sub - Subtracts the top element of the stack from the second
 * top element.
 * @head: Double pointer to the head of the stack.
 * @counter: The line number currently being run.
 *
 * Description: If the stack contains less than two elements,
 * prints an error message and exits. Otherwise, subtracts the
 * top element
 * of the stack from the second top element. The result is
 * stored in the
 * second top element of the stack, and the top element is removed.
 */
void f_sub(stack_t **head, unsigned int counter)
{
int diff;

if (*head == NULL || (*head)->next == NULL)
{
fprintf(stderr, "L%u: can't sub, stack too short\n", counter);
exit(EXIT_FAILURE);
}

diff = (*head)->next->n - (*head)->n;
pop(head, counter);
(*head)->n = diff;
}

