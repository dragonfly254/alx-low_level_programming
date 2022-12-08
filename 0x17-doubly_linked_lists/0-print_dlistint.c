#include "lists.h"

/**
 * size_t print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head of the list.
 *
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (h == NULL)
		return (0);

	size_t nnodes;
	dlistint_t *curr;

	curr = h;
	nnodes = 0;

	while (curr)
	{
		printf("%d\n", curr->n);
		nnodes++;
		curr = curr->next;
	}

	return (nnodes);
}
