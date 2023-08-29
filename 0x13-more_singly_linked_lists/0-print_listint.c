#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_listint - call to print elements
* @h: set to null
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int nodenumber = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodenumber++;
	}
	return (nodenumber);
}
