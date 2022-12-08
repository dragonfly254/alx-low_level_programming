#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: head of the list.
 *
 * Return: number of element in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	size_t n = 0;

	while (h->prev != NULL)
		h = h->prev;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
