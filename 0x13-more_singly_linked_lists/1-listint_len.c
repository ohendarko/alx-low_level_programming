#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* listint_len - call to print elements
* @h: set to null
* Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	int elemnum = 0;

	while (h != NULL)
	{
		h = h->next;
		elemnum++;
	}
	return (elemnum);
}
