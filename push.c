#include "monty.h"

/**
 * is_number - Checks if a string is a number.
 * @s: The string to check.
 *
 * Return: 1 if the string is a number, 0 otherwise.
 */
int is_number(char *s)
{
    int i = 0;

    if (s == NULL)
        return (0);
    if (s[0] == '-')
        i++;
    for (; s[i]; i++)
    {
        if (isdigit(s[i]) == 0)
            return (0);
    }
    return (1);
}

/**
 * f_push - Pushes an integer onto the stack.
 * @stack: A pointer to the stack.
 * @line_number: The line number in the Monty bytecode file.
 */
void f_push(stack_t **stack, unsigned int line_number)
{
    int n;
    stack_t *new;

    n = atoi(bus.arg);
    if (bus.arg == NULL || is_number(bus.arg) == 0)
    {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    new = malloc(sizeof(stack_t));
    if (new == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }
    new->n = n;

    if (*stack != NULL)
    {
        new->next = *stack;
        (*stack)->prev = new;
    }
    else
    {
        new->next = NULL;
    }
    new->prev = NULL;
    *stack = new;
}

/**
 * f_pall - Prints all the integers in the stack.
 * @stack: A pointer to the stack.
 * @line_number: The line number in the Monty bytecode file (not used here).
 */
void f_pall(stack_t **stack, unsigned int line_number)
{
    stack_t *tmp;

    (void)line_number;

    tmp = *stack;
    while (tmp != NULL)
    {
        printf("%d\n", tmp->n);
        tmp = tmp->next;
    }
}

