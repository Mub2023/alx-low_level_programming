#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head:pointer of at the beginning of a dlistint_t list.
 * @n: const integer for the new node.
 * Return:the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *NNode;

	NNode = malloc(sizeof(dlistint_t));
	if (NNode == NULL)
		return (NULL);

	NNode->n = n;
	NNode->prev = NULL;
	NNode->next = *head;
	if (*head != NULL)
		(*head)->prev = NNode;
	*head = NNode;

	return (NNode);
}
