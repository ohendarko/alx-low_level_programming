#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* get_nodeint_at_index - get node at position index
* @head: address
* @index: position
* Return: number of nodes
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodenum = 0;

	while (head != NULL && nodenum < index)
	{
		head = head->next;
		nodenum++;
	}
	return (head);
}
