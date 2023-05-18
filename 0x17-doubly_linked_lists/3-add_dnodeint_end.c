#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the end of list.
 * @n:const integer to add .
 * Return: adds a new node at the end of a dlistint_t list.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *NewN, *end;

	NewN = malloc(sizeof(dlistint_t));
	if (NewN == NULL)
		return (NULL);
	NewN->n = n;
	NewN->next = NULL;

	if (*head == NULL)
	{
		NewN->prev = NULL;
		*head = NewN;
		return (NewN);
	}
	end = *head;
	while(end->next != NULL)
		end = end->next;
	end->next = NewN;
	NewN->prev = end;
	return (NewN);
}
