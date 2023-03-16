#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - that concatenates two strings.
 * @s1: is the pointer of the string
 * @s2: is the pointer of the second string.
 * @n:is the input value of bytes
 * Return: pinter of string d.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *d;
	unsigned int i = 0, k = 0, ln1 = 0, ln2 = 0;

	while (s1 && s1[ln1])
		ln1++;
	while (s2 && s2[ln2])
		ln2++;

	if (n < ln2)
		d = malloc(sizeof(char) * (ln1 + n + 1));
	else
		d = malloc(sizeof(char) * (ln1 + ln2 + 1));

	if (!d)
		return (NULL);

	while (i < ln1)
	{
		d[i] = s1[i];
		i++;
	}
	while (n < ln2 && i < (ln1 + n))
		d[i++] = s2[k++];

	while (n >= ln2 && i < (ln1 + ln2))
		d[i++] = s2[k++];

	d[i] = '\0';

	return (d);
}
