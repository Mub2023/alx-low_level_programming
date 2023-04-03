#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list.
 * @head: is pointer of pointer
 * Return:Always 0 (Success)
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
