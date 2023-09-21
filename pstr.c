#include "monty.h"

/**
 * f_pstr - Prints the string starting at the top of the stack.
 * @head: Double pointer to the head of the stack.
 * @counter: The line number currently being run.
 *
 * Description: The integer stored in each element of the stack is
 * treated as the ascii value of the character to be printed.
 * The string stops when either the stack is over, the value of the element
 * is 0, or the value of the element is not in the ascii table.
 * If the stack is empty, print only a new line.
 */
void f_pstr(stack_t **head, unsigned int counter)
{
stack_t *temp = *head;

(void)counter;

while (temp != NULL && temp->n > 0 && temp->n < 128)
{
printf("%c", temp->n);
temp = temp->next;
}
printf("\n");
}

