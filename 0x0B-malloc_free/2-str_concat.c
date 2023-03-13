#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: is the pointer of string 1.
 * @s2: is the pointer of string 2.
 * Return: concat os s1 and s2 or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *full;
	int a, b;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";
	a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	full = malloc(sizeof(char) * (a + b + 1));
		if (full == NULL)
			return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		full[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		full[a] = s2[b];
		a++;
		b++;
	}
	full[a] = '\0';
	return (full);
}
