#include "lists.h"
/**
 * get_dnodeint_at_index - find the nth node of a dlistint_t linked list.
 * @head: the head node of the dlistint_t.
 * @index:  the index of the node, starting from 0
 *
 * Return: the address of the located node / NULL if node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}

/*
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			if (index == count)
			{
				return (head);
			}
			count++;
			head = head->next;
		}
	}

	return (NULL);
}*/
