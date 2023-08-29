#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* reverse_listint - call to print elements
* @head: address
* index: index of list
* n: not at this time
* Return: what you should
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *hold1 = NULL;
	listint_t *hold2 = NULL;

	while (*head != NULL)
	{
		hold2 = (*head)->next;
		(*head)->next = hold1;
		hold1 = *head;
		*head = hold2;
	}
	*head = hold1;

	return (*head);
}
