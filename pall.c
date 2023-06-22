#include "monty.h"

/**
 * f_pall - prints all elements of the stack
 * @head: pointer to the head
 * @counter: number of elements
*/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
