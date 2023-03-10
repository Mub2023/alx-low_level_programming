#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: is the pointer of the first string
 * @s2: is the pointer of the second string
 * Return: s1[d] - s2[d]
 */
int _strcmp(char *s1, char *s2)
{
	int g;

	g = 0;
	while (s1[g] != '\0' && s2[g] != '\0')
	{
		if (s1[g] != s2[g])
		{
			return (s1[g] - s2[g]);
		}
		g++;
	}
	return (0);
}
