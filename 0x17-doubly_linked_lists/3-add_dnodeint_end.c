#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: a pointer to the head node.
 * @n: data of the new node.
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head != NULL)
	{
		last_node = *head;
		/* find last node */
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		/* Update the next of the last node */
		last_node->next = new_node;
		new_node->prev = last_node;
	}
	/* If the list is empty, the new node is also the head */
	else
	{
		*head = new_node;
	}

	return (new_node);
}
