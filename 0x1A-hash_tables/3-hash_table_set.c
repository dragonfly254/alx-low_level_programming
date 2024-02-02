#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: the key
 * @value: value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *cur = NULL;
	unsigned long int idx;
	hash_node_t *new_node = NULL;

	if (ht == NULL || *key == '\0' || key == NULL)
		return (0);

	idx = hash_djb2((unsigned char *)key) % ht->size;

	cur = ht->array[idx];

	while (cur != NULL)
	{
		if (strcmp(cur->key, key) == 0)
		{
			free(cur->value);
			cur->value = strdup(value);

			if (cur->value == NULL)
			{
				perror("error in mem allocation");
				return (0);
			}
			return (1);
		}
		cur = cur->next;
	}

	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));

        if (new_node == NULL)
        {
                perror("Error in creating new node");
                return (0);
        }

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		perror("error in memory allocation");
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}
