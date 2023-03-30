#include "lists.h"
/**
 * free_list - free a linked list
 * @head: list_t pointer
 */
void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
}
