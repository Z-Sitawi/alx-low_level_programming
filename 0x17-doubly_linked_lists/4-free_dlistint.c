#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: a pointer to the head node.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
