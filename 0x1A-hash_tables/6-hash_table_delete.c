#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table
 * Return: Nothing !!
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *d, *temp;
	hash_table_t *h  = ht;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			d = ht->array[x];
			while (d != NULL)
			{
				temp = d->next;
				free(d->key);
				free(d->value);
				free(d);
				d = temp;
			}
		}
	}
	free(h->array);
	free(h);
}
