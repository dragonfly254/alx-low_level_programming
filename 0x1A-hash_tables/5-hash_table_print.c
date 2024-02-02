#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 *
 * Return: none
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int len, i;
	hash_node_t *cur = NULL;

	if (ht == NULL)
		return;

	len = ht->size;

	printf("%s", "{");
	for (i = 0; i < len; i++)
	{
		cur = ht->array[i];
		while (cur)
		{
			printf("'%s': '%s'", cur->key, cur->value);
			if (cur->next != NULL)
				printf(", ");

			cur = cur->next;
		}
	}
	printf("%s\n", "}");
}

