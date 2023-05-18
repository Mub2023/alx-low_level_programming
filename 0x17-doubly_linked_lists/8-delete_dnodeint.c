#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index a dlistint_t st
 * @head: is the pointer of the firest element in dlistint_t linked list.
 * @index:is the index of the node be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int x;

	if (*head == NULL)
		return (-1);

	tmp = *head;
	for (x = 0; x < index && tmp != NULL; x++)
		tmp = tmp->next;

	if (tmp == NULL)
		return (-1);

	if (tmp == *head)
		*head = tmp->next;

	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next;
	free(tmp);
	return (1);
}
