#include "lists.h"
/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: is the pointer of dlistint_t list.
 * Return: Always 0 (Success)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_node;

	while (head)
	{
		free_node = head;
		head = head->next;
		free(free_node);
	}
	head = NULL;
}
