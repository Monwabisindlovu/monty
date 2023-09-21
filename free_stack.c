#include "monty.h"

/**
 * free_stack - Frees a stack.
 * @stack: A pointer to the stack to be freed.
 */
void free_stack(stack_t *stack)
{
stack_t *tmp;

while (stack != NULL)
{
tmp = stack;
stack = stack->next;
free(tmp);
}
}

