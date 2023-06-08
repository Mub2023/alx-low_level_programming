#include "hash_tables.h"
/**
 * hash_table_set - that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key and can't be empty !!.
 * @value: is the value associated with the key,
 * value must be duplicated. value can be an empty string!!!.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int x, y;
	char *copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy = strdup(value);
	if (copy == NULL)
		return (0);

	y = key_index((const unsigned char *)key, ht->size);
	for (x = y ; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = copy;
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(copy);
		return (0);
	}
	node->value = copy;
	node->next = ht->array[y];
	ht->array[y] = node;
	return (1);
}
