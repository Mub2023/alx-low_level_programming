#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: is the size of the array
 * Return:a pointer to the newly created hash table or
 * If something went wrong, your function should return NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *me;
	unsigned long int x;

	me = malloc(sizeof(hash_table_t));
	if (me == NULL)
		return (NULL);

	me->size = size;
	me->array = malloc(sizeof(hash_table_t *) * size);
	if (me->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		me->array[x] = NULL;

	return (me);
}
