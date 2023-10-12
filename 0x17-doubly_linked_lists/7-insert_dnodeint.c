#include "lists.h"
/**
* insert_dnodeint_at_index - insert at index
* @h: beats me
* @idx: beats me
* @n: beats me
* Return: sum
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (current == NULL)
		return (NULL);
	while (i < idx - 1)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		i++;
	}
	if (i < idx - 1)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
