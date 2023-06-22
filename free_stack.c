#include "monty.h"

/**
* free_stack - clears the list
* @head: pointer to the head
*/

void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
