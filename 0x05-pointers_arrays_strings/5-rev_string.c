#include "main.h"
/*
 * Auth mubarak musad atta
 */
/**
 * rev_string - a function that reverses a string
 * @s:the pointer of the string
 * Retrun: Always 0 (Success)
 */
void rev_string(char *s)
{
	int g = 0, n = 0;
	char jc;

	while (s[g] != '\0')
	{
		g++;
	}
	while (n < g)
	{
		g--;
		jc = s[n];
		s[n++] = s[g];
		s[g] = jc;
	}
}
