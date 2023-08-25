#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* free_list - function of type size_t
* @head: pointer that returns list_t type
* str: betty
* Return: size_t
*/
void free_list(list_t *head)
{
	list_t *table;

	while (head != NULL)
	{
		table = head;
		head = head->next;
		free(table->str);
		free(table);
	}
}
