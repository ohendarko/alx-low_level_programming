#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* add_node_end - function of type size_t
* @head: pointer that returns list_t type
* @str: betty
* Return: size_t
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *curr;

	if (str == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = strlen(str);
	newnode->next = NULL;

	if (!*head)
	{
		*head = newnode;
		return (newnode);
	}
	curr = *head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = newnode;
	return (newnode);
}
