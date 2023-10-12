#include "lists.h"
/**
* add_dnodeint_end - print all list elements
* @head: beats me
* @n: beats me
* Return: new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *t, *temp = malloc(sizeof(dlistint_t));

	if (head == NULL)
		return (NULL);
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
	}
	else
	{
		t = *head;
		while (t->next != NULL)
			t = t->next;
		t->next = temp;
		temp->prev = t;
	}
	return (temp);
}
