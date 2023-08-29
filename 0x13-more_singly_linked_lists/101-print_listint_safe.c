#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_listint_safe - call to print elements
* @head: set to null
* Return: number of nodes
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *slow = head;
	const listint_t *fast = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		count++;

		if (fast != NULL && fast->next != NULL)
		{
			slow = slow->next;
			fast = fast->next->next;

			if (slow == fast)
			{
				printf("-> [%p] %d\n", (void *)slow, slow->n);
				printf("Loop detected!\n");
				return (count);
			}
		}
	}

	return (count);

}
