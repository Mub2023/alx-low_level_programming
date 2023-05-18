#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: is the pointer of the first element in list.
 * @index:is the index of the node, starting from 0.
 * Return:returns the nth node list or NULL if the node does not exist,
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head)
	{
		if (x == index)
			return (head);
		x++;
		head = head->next;
	}
	return (NULL);
}
