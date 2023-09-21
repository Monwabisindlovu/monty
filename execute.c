#include "monty.h"

/**
 * f_pint - Prints the value at the top of the stack.
 * @stack: A pointer to the stack.
 * @line_number: The line number of the Monty bytecode file.
 *
 * Description: Prints the value at the top of the stack and
 * handles the case when the stack is empty.
 */
void f_pint(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}

printf("%d\n", (*stack)->n);
}
/**
 * execute - Execute a Monty bytecode instruction.
 * @content: The instruction string.
 * @stack: A pointer to the stack.
 * @counter: The line number in the Monty bytecode file.
 * @file: A pointer to the Monty bytecode file.
 */
void execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
char *opcode, *arg;
int i;
instruction_t opcodes[] = {
{"push", f_push},
{"pall", f_pall},
{"pint", f_pint},
{"pop", pop}, 
{"swap", swap},
{NULL, NULL}
};

opcode = strtok(content, " \t\n");
arg = strtok(NULL, " \t\n");

bus.arg = arg;

for (i = 0; opcodes[i].opcode; i++)
{
if (strcmp(opcode, opcodes[i].opcode) == 0)
{
opcodes[i].f(stack, counter);
return;
}
}

fprintf(stderr, "L%d: unknown instruction %s\n", counter, opcode);
free_stack(*stack);
fclose(file);
exit(EXIT_FAILURE);
}
