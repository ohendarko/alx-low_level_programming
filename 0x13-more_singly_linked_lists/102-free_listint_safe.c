#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_listint_safe - call to print elements
* @h: set to null
* Return: number of nodes
*/
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *current, *temp;

	if (h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		node_count++;
		temp = current;
		current = current->next;
		free(temp);
		if (temp <= current)
			break;
	}

	*h = NULL;

	return (node_count);

}
