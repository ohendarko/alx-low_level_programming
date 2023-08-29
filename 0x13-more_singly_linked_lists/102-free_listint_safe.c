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
	size_t count = 0;
	listint_t *current, *next;

	if (*h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		count++;
		if (current >= next)
			break;
		current = next;
	}
	*h = NULL;

	return (count);
}
