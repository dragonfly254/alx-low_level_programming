#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: head of the list.
 *
 * Return: number of element in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t arr_length = 0;

	if (h == NULL)
		return (n);

	while (h->prev != NULL)
		h = h->prev;
	while (h)
	{
		arr_length++;
		h = h->next;
	}

	return (arr_length);
}
