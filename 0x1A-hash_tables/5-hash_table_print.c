#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table.
 * @ht:is the hash table to print.
 * Return: Nothing just print.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *p;
	unsigned char f = 0;
	unsigned long int x;

	if (ht == NULL)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (f == 1)
				printf(", ");
			p = ht->array[x];
			while (p != NULL)
			{
				printf("'%s': '%s'", p->key, p->value);
				p = p->next;
				if (p != NULL)
					printf(", ");
			}
			f = 1;
		}
	}
	printf("}\n");
}
