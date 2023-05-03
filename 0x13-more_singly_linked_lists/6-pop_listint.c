#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: a pointer to a pointer to the head of the linked list
 *
 * Return: n (Success) else if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	/* Move the head pointer to the next node */
	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}
