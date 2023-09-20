#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Struct for Monty stack */
typedef struct MontyStack {
    int n;
    struct MontyStack *next;
} MontyStack_t;

/* Global variable to hold the mode (stack or queue) */
extern bool queue_mode;

/* Function prototypes */
int main(int argc, char *argv[]);
void push(MontyStack_t **stack, unsigned int line_number, const int n);
void pop(MontyStack_t **stack);
void pint(MontyStack_t *stack, unsigned int line_number);
void pall(MontyStack_t **stack, unsigned int line_number);
void swap(MontyStack_t **stack, unsigned int line_number);
void add(MontyStack_t **stack, unsigned int line_number);
void nop(MontyStack_t *stack, unsigned int line_number);
void sub(MontyStack_t **stack, unsigned int line_number);
void div_op(MontyStack_t **stack, unsigned int line_number);
void mul(MontyStack_t **stack, unsigned int line_number);
void mod(MontyStack_t **stack, unsigned int line_number);
void pchar(MontyStack_t *stack, unsigned int line_number);
void pstr(MontyStack_t *stack, unsigned int line_number);
void rotl(MontyStack_t **stack, unsigned int line_number);
void rotr(MontyStack_t **stack, unsigned int line_number);
void stack_mode(MontyStack_t **stack, unsigned int line_number);
void queue_mode_func(MontyStack_t **stack, unsigned int line_number);

#endif /* MONTY_H */

