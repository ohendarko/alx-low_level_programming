#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* free_listint2 - function name
* @head: pointer to a pointer
* str: betty
* Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *htnull;

	while (*head != NULL)
	{
		htnull = *head;
		*head = (*head)->next;
		free(htnull);
	}
}
