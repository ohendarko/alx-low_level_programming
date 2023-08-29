#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* add_node - function of type size_t
* @head: pointer that returns list_t type
* @str: betty
* Return: size_t
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

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
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
