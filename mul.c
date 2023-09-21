#include "monty.h"

/**
 * f_mul - Multiplies the second top element of the
 * stack with the top element.
 * @head: Double pointer to the head of the stack.
 * @counter: The line number currently being run.
 *
 * Description: If the stack contains less than two elements,
 * prints an error message and exits. Otherwise,
 * multiplies the second top element
 * of the stack with the top element. The result is stored in the
 * second top element of the stack, and the top element is removed.
 */
void f_mul(stack_t **head, unsigned int counter)
{
int product;

if (*head == NULL || (*head)->next == NULL)
{
fprintf(stderr, "L%u: can't mul, stack too short\n", counter);
exit(EXIT_FAILURE);
}

product = (*head)->next->n * (*head)->n;
pop(head, counter);
(*head)->n = product;
}

