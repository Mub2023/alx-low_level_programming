#include "lists.h"
/**
 * dlistint_len - the number of elements in a linked dlistint_t.
 * @h: pointer.
 * Return:the number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t NumOfNodes = 0;

	while (h)
	{
		NumOfNodes++;
		h = h->next;
	}

	return (NumOfNodes);
}
