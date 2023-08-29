#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* pop_listint - call to print elements
* @head: set to null
* n: not at this time
* Return: what the code says
*/
int pop_listint(listint_t **head)
{
	listint_t *delp;
	int data = 0;

	if (*head == NULL)
	{
		return (0);
	}
	delp = *head;
	data = delp->n;
	*head = (*head)->next;;
	free(delp);

	return (data);
}
