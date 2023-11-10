#include "lists.h"
/**
 * sum_dlistint - calculates the sum of all the data (n) of a linked list.
 * @head: a pointer to the head of the linked list.
 * Return: The sum of all the data (n) of a dlistint_t linked list.
 */

int sum_dlistint(dlistint_t *head)
{
	int i, sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	for (i = 0; head->next != NULL; i++)
	{
		sum = sum + head->n;
		head = head->next;
	}
	sum = sum + head->n;

	return (sum);
}
