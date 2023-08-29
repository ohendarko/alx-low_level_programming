#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* add_nodeint_end - call to print elements
* @head: set to null
* @n: not at this time
* Return: number of nodes
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ende, *curnd;

	ende = malloc(sizeof(listint_t));

	if (ende == NULL)
	{
		return (NULL);
	}
	ende->n = n;
	ende->next = NULL;
	if (*head == NULL)
	{
		*head = ende;
		return (ende);
	}

	curnd = *head;

	while (curnd->next != NULL)
	{
		curnd = curnd->next;
	}
	curnd->next = ende;

	return (ende);
}
