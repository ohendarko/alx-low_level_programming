#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* free_listint - function of type size_t
* @head: pointer that returns list_t type
* str: betty
* Return: size_t
*/
void free_listint(listint_t *head)
{
	listint_t *tbfree;

	while (head != NULL)
	{
		tbfree = head;
		head = head->next;
		free(tbfree);
	}
}
