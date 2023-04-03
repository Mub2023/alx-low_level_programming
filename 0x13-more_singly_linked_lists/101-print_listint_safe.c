#include "lists.h"
/**
 * looped_listint_len - count the number of uinq nodes
 * @head: A pointer
 * Return:if the list is not loped -0
 * otherwise - the number of unique nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tor, *h;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tor = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (tor == h)
		{
			tor = head;
			while (tor != h)
			{
				nodes++;
				tor = tor->next;
				h = h->next;
			}
			tor = tor->next;
			while (tor != h)
			{
				nodes++;
				tor = tor->next;
			}
			return (nodes);
		}
		tor = tor->next;
		h = (h->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer
 * Return: the number of nodes in the list
 * if fails, exit the program with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, indx = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (indx = 0; indx < nodes; indx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
