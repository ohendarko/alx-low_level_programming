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
	const listint_t *slow, *fast;
	int loop_detected = 0;

	slow = head;
	fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;

		count++;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			loop_detected = 1;
			break;
		}
	}
	if (loop_detected)
	{
		slow = head;
		while (slow != fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			fast = fast->next;
		}
		printf("-> [%p] %d\n", (void *)slow, slow->n);
	}

	return (count);
}
