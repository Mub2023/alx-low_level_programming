#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of linked list.
 * @head: is a pointer
 * Return: 0 if the list is empty or sum of all the data (n) of a listint_t
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
