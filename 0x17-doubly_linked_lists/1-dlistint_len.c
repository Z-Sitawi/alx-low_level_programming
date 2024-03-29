#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: a pointer to the head node.
 *
 * Return: the number of elements in the linked dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count = count + 1;
		h = h->next;
	}
	return (count);
}
