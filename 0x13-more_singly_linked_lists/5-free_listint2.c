#include "lists.h"

/**
 * free_listint2 - It frees a listint_t list.
 *
 * @head: a pointer to the head of the linked list.
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
