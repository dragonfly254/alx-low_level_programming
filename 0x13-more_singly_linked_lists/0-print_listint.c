#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head of list.
 *
 * Return: the number of the nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t num_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}
