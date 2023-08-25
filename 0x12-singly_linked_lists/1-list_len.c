#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* list_len - function of type size_t
* @h: pointer that returns list_t type
* Return: size_t
*/
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
