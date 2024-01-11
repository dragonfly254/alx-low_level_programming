#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur_ptr;
	dlistint_t *nex_ptr;
	unsigned int i;

	cur_ptr = *head;

	if (cur_ptr != NULL)
		while (cur_ptr->prev != NULL)
			cur_ptr = cur_ptr->prev;

	i = 0;

	while (cur_ptr != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = cur_ptr->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				nex_ptr->next = cur_ptr->next;

				if (cur_ptr->next != NULL)
					cur_ptr->next->prev = nex_ptr;
			}
			free(cur_ptr);
			return (1);
		}
		nex_ptr = cur_ptr;
		cur_ptr = cur_ptr->next;
		i++;
	}
	return (-1);
}
