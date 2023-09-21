#include "monty.h"

/**
 * f_rotl - Rotates the stack to the top.
 * @head: Double pointer to the head of the stack.
 * @counter: The line number currently being run.
 *
 * Description: The top element of the stack becomes the last one,
 * and the second top element of the stack becomes the first one.
 * rotl never fails.
 */
void f_rotl(stack_t **head, unsigned int counter)
{
stack_t *temp;

(void)counter;

if (head == NULL || *head == NULL || (*head)->next == NULL)
{
return;
}

temp = *head;
*head = (*head)->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}

while (temp != NULL && temp->next != NULL)
{
temp = temp->next;
}

if (temp != NULL && (*head) != NULL && (*head)->prev != NULL)
{
temp->next = (*head)->prev;
(*head)->prev->prev = temp;
(*head)->prev->next = NULL;
}
}

