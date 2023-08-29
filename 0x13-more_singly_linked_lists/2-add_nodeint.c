#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* add_nodeint - call to print elements
* @head: set to null
* @n: not at this time
* Return: number of nodes
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *start;

	start = malloc(sizeof(listint_t));

	if (start == NULL)
	{
		return (NULL);
	}
	start->n = n;
	start->next = *head;
	*head = start;
	return (start);
}
