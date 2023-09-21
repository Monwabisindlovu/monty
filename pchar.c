#include "monty.h"

/**
 * f_pchar - Prints the char at the top of the stack.
 * @head: Double pointer to the head of the stack.
 * @counter: The line number currently being run.
 *
 * Description: If the stack is empty,
 * prints an error message and exits. Otherwise, prints the char at the
 * top of the stack.
 * If the value is not in the ascii table, prints an error message and exits.
 */
void f_pchar(stack_t **head, unsigned int counter)
{
int ascii_value;

if (*head == NULL)
{
fprintf(stderr, "L%u: can't pchar, stack empty\n", counter);
exit(EXIT_FAILURE);
}

ascii_value = (*head)->n;
if (ascii_value < 0 || ascii_value > 127)
{
fprintf(stderr, "L%u: can't pchar, value out of range\n", counter);
exit(EXIT_FAILURE);
}

printf("%c\n", ascii_value);
}

