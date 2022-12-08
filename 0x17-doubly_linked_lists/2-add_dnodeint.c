#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: head of the list.
 * @n: value of the list to be inserted.
 *
 * Return: new node or NULL on fail.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *h;

	node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	h = *(head);

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	node->next = h;

	if (h != NULL)
		h->prev = node;
	*(head) = node;

	return (node);
}
