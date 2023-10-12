#include "lists.h"
/**
* get_dnodeint_at_index - as the name implies
* @head: beats me
* @index: beats me
* Return: null
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
