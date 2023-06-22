#include "monty.h"

/**
 * f_sub- sustracts top two elements
 * @head: pointer to the head
 * @counter: number of elemets
 */

void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int num, nodes;

	temp = *head;
	for (nodes = 0; temp != NULL; nodes++)
		temp = temp->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	num = temp->next->n - temp->n;
	temp->next->n = num;
	*head = temp->next;
	free(temp);
}
