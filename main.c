#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

ssize_t getline(char **lineptr, size_t *n, FILE *stream);
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
 */
int main(int argc, char *argv[])
{
    MontyStack_t *stack = NULL;
    unsigned int line_number = 0;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    FILE *file;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: %s file\n", argv[0]);
        return (EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    if (file == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        return (EXIT_FAILURE);
    }

    while ((read = getline(&line, &len, file)) != -1)
    {
        line_number++;
        push(&stack, line_number, atoi(line + 5));
    }

    pall(&stack, line_number);

    free(line);
    fclose(file);

    return (EXIT_SUCCESS);
}

