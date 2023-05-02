#include "lists.h"

/**
 * add_nodeint_end - It adds a new node at the end of a listint_t list.
 *
 * @head: a pointer to a pointer to the head of the list
 * @n: the integer value that stored in the new node.
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = (listint_t *) malloc(sizeof(listint_t));
	listint_t *tmp;
	tmp = *head;

	if (head == NULL)
                return (NULL);

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
	}
	tmp->next = newnode;

	return (newnode);
}
