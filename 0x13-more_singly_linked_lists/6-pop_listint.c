#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * , and returns the head node’s data (n).
 * @head: is a pointer of pointer
 * Return: 0 if the linked list is empty 
 * or the data inside the elements that was deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
