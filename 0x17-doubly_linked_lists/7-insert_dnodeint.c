#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the first element in linked list.
 * @idx: index of the list where the new node be added, starts at 0.
 * @n: the integer to be added.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *NNew, *tmp;
	unsigned int x;

	NNew = malloc(sizeof(dlistint_t));
	if (NNew == NULL)
		return (NULL);

	NNew->n = n;

	if (idx == 0)
	{
		NNew->next = *h;
		NNew->prev = NULL;
		if (*h != NULL)
			(*h)->prev = NNew;
		*h = NNew;
		return (NNew);
	}

	tmp = *h;
	for (x = 0; x < idx - 1 && tmp != NULL; x++)
		tmp = tmp->next;

	if (tmp == NULL)
	{
		free(NNew);
		return (NULL);
	}

	NNew->next = tmp->next;
	NNew->prev = tmp;
	tmp->next = NNew;
	if (NNew->next != NULL)
		NNew->next->prev = NNew;

	return (NNew);
}
