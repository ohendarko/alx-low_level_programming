#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* sum_listint - get node at position index
* @head: address
* index: position
* Return: number of nodes
*/
int sum_listint(listint_t *head)
{
	int sumofn = 0;

	while (head != NULL)
	{
		sumofn += head->n;
		head = head->next;
	}
	return (sumofn);
}
