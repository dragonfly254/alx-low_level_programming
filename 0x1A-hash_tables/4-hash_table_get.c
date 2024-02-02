#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table you want to look into
 * @key: key you are looking for
 *
 * Return: value associated with the element, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *cur = NULL;
	unsigned long int idx;

	if (ht == NULL || *key == '\0' || key == NULL)
		return (NULL);

	idx = hash_djb2((unsigned char *)key) % ht->size;

	cur = ht->array[idx];
	
	while (cur)
	{
		if (strcmp(cur->key, key) == 0)
			return cur->value;
		cur = cur->next;
	}

	return (NULL);
}
