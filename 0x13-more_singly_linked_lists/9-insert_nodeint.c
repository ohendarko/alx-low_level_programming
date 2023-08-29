#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* insert_nodeint_at_index - call to print elements
* @head: address
* @idx: index of list
* @n: not at this time
* Return: new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *given = malloc(sizeof(listint_t));
	listint_t *tracknow;
	listint_t *trackprev;
	unsigned int count = 0;

	tracknow = *head;
	trackprev = NULL;

	if (idx == 0)
	{
		given = malloc(sizeof(listint_t));
		if (given == NULL)
		{
			return (NULL);
		}
		given->n = n;
		given->next = *head;
		*head = given;
		return (given);
	}
	while (count < idx && tracknow != NULL)
	{
		trackprev = tracknow;
		tracknow = tracknow->next;
		count++;
	}
	if (count != idx)
	{
		return (NULL);
	}
	if (given == NULL)
	{
		return (NULL);
	}
	given->n = n;
	given->next = tracknow;
	trackprev->next = given;

	return (given);
}
