#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht:is the hash table you want to look into.
 * @key:is the key you are looking for.
 * Return:the value associated with the element
 * or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *look;
	unsigned long int x;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	x = key_index((const unsigned char *)key, ht->size);
	if (x >= ht->size)
		return (NULL);
	look = ht->array[x];
	while (look && strcmp(look->key, key) != 0)
		look = look->next;

	return ((look == NULL) ? NULL : look->value);
}
