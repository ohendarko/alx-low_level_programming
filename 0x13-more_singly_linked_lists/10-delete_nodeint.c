#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* delete_nodeint_at_index - call to print elements
* @head: address
* @index: index of list
* n: not at this time
* Return: new node
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tracknow = *head;
	listint_t *trackprev = NULL;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(tracknow);
		return (1);
	}
	while (count < index - 1)
	{
		if (!tracknow || !(tracknow->next))
		{
			return (-1);
		}
		trackprev = tracknow;
		tracknow = tracknow->next;
		count++;
	}
	if (count < index)
	{
		return (0);
	}

	trackprev->next = tracknow->next;

	free(tracknow);

	return (1);
}
