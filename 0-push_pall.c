#include "monty.h"

/**
 * push - pushes an element to the stack.
 * @stack: double pointer to the top of the stack.
 * @line_number: line number from the file.
 * @n: integer to push on the stack.
 *
 * Return: nothing.
 */
void push(MontyStack_t **stack, unsigned int line_number, const int n)
{
MontyStack_t *new;

new = malloc(sizeof(MontyStack_t));
if (new == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
new->n = n;
new->next = *stack;
*stack = new;


(void)line_number;
}

/**
 * pall - prints all the values on the stack, starting from the top.
 * @stack: double pointer to the top of the stack.
 * @line_number: line number from the file.
 *
 * Return: nothing.
 */
void pall(MontyStack_t **stack, unsigned int line_number)
{
MontyStack_t *current;

current = *stack;
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
}


(void)line_number;
}

