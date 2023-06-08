#include "hash_tables.h"
/**
 * shash_table_create - creats a sorted hash table.
 * @size: The size of the new sorted list.
 * Return: pointer to the new sorted hasg table
 * otherwise - NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash;
	unsigned long int x;

	hash = malloc(sizeof(shash_table_t));
	if (hash == NULL)
		return (NULL);

	hash->size = size;
	hash->array = malloc(sizeof(shash_node_t *) * size);
	if (hash->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		hash->array[x] = NULL;
	hash->shead = NULL;
	hash->stail = NULL;
	return (hash);
}
/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: a pointer to sorted table.
 * @key: the key to be added cannot be empty string!!.
 * @value: The value to associated with key!!.
 * Return: 1 if success 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *t;
	char *copy;
	unsigned long int x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	copy = strdup(value);
	if (copy == NULL)
		return (0);
	x = key_index((const unsigned char *)key, ht->size);
	t = ht->shead;
	while (t)
	{
		if (strcmp(t->key, key) == 0)
		{
			free(t->value);
			t->value = copy;
			return (1);
		} t = t->next;
	} node = malloc(sizeof(shash_node_t));
	if (node == NULL)
	{
		free(copy);
		return (0);
	} node->key = strdup(key);
	if (node->key == NULL)
	{
		free(copy);
		free(node);
		return (0);
	} node->value = copy;
	node->next = ht->array[x];
	ht->array[x] = node;
	shash_table_insert_sorted(ht, node, key);
	return (1);
}
/**
 * shash_table_insert_sorted - inserting the new key in correct place
 * @ht: the pointer to sorted list table.
 * @node: is the node of the table.
 * Return: NOTING!!.
 */
void shash_table_insert_sorted(shash_table_t *ht, shash_node_t *node, const char *key)
{
	shash_node_t *t;

	if (ht->shead == NULL)
	{
		node->sprev = NULL;
		node->snext = NULL;
		ht->shead = node;
		ht->stail = node;
	} else if (strcmp(ht->shead->key, key) > 0)
	{
		node->sprev = NULL;
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	} else
	{
		t = ht->shead;
		while (t->snext != NULL && strcmp(t->snext->key, key) < 0)
			t = t->snext;
		node->sprev = t;
		node->snext = t->snext;
		if (t->snext == NULL)
			ht->stail = node;
		else
			t->snext->sprev = node;
		t->snext = node;
	}
}
/**
 * shash_table_get - Retrieve the value associated with key in sorted table
 * @ht: the pointer to sorted list table.
 * @key: the key to get the value pf.
 * Return: the value associted with the key or NULL if failed.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int x;
	shash_node_t *n;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	x = key_index((const unsigned char *)key, ht->size);
	if (x >= ht->size)
		return (NULL);

	n = ht->shead;
	while (n != NULL && strcmp(n->key, key) != 0)
		n = n->snext;

	return ((n == NULL) ? NULL : n->value);
}
/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: a pointer to the sorted table.
 * Return: Nothing!! prints only
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *n;

	if (ht == NULL)
		return;

	n = ht->shead;
	printf("{");
	while (n != NULL)
	{
		printf("'%s': '%s'", n->key, n->value);
		n = n->snext;
		if (n != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: a pointer to the sorted table.
 * Return: Nothing!! but Prints a sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *n;

	if (ht == NULL)
		return;

	n = ht->stail;
	printf("{");
	while (n != NULL)
	{
		printf("'%s': '%s'", n->key, n->value);
		n = n->sprev;
		if (n != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: a pointer to the sorted table
 * Return: Nothing!! but delete the table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *h = ht;
	shash_node_t *n, *t;

	if (ht == NULL)
		return;

	n = ht->shead;
	while (n)
	{
		t = n->snext;
		free(n->key);
		free(n->value);
		free(n);
		n = t;
	}
	free(h->array);
	free(h);
}
