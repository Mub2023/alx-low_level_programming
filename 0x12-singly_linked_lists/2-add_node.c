#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head:double pointer to list_t
 * @str: new string to add
 * Return: the address of new element,
 * or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p;
	unsigned int len = 0;

	while (str[len])
		len++;

	p = malloc(sizeof(list_t));
	if (!p)
		return (NULL);

	p->str = strdup(str);
	p->len = len;
	p->next = (*head);
	(*head) = p;

	return (*head);
}
