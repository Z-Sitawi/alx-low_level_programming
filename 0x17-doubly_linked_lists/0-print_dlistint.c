#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: a pointer to the head node.
 *
 * Return: the number of elements in the linked dlistint_t list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count = count + 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
