#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_list - function of type size_t
* @h: pointer that returns list_t type
* Return: size_t
*/
size_t print_list(const list_t *h)
{
	size_t links = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
		links++;
	}
	return (links);
}
