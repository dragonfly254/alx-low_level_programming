#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to head of the linked list.
 *
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	if (h == NULL)
		return (counter);

	while (h->prev)
		h = h->prev;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
