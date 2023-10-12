#include "lists.h"
/**
* add_dnodeint - print all list elements
* @head: beats me
* @n: beats me
* Return: new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (head == NULL)
		return (NULL);
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;

	if (*head != NULL)
		(*head)->prev = temp;

	*head = temp;
	return (temp);
}
