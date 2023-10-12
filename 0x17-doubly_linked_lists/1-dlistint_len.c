#include "lists.h"
/**
* dlistint_len - print all list elements
* @h: beats me
* Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
