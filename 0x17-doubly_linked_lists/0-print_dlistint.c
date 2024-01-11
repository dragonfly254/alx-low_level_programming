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
	dlistint_t *eter_ptr = NULL;

	if (h == NULL)
		return (NULL);

	while (h->prev)
		h = h->prev;

	iter_ptr = h;

	while (iter_ptr)
	{
		printf("%d\n", iter_ptr->n);
		iter_ptr = iter_ptr->next;
		counter++;
	}

	return (counter);
}
