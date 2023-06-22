#include "monty.h"

/**
 * f_push - adds a new node to the stack
 * @head: pointer to the head
 * @counter: number of elements
*/

void f_push(stack_t **head, unsigned int counter)
{
	int num, i = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			i++;
		for (; bus.arg[i] != '\0'; i++)
		{
			if (bus.arg[i] > 57 || bus.arg[i] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }
	}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }

	num = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, num);
	else
		addqueue(head, num);
}
