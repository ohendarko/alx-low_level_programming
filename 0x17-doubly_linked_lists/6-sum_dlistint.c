#include "lists.h"
/**
* sum_dlistint - as the name implies
* @head: beats me
* index: beats me
* Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
