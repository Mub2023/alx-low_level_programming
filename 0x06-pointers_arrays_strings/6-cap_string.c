#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 * @c: the pointer of the string
 * Return: c
 */
char *cap_string(char *c)
{
	int g = 0;

	while (c[g])
	{
		while (!(c[g] >= 'a' && c[g] <= 'z'))
			g++;
		if (c[g - 1] == ' ' ||
				c[g - 1] == '\t' ||
				c[g - 1] == '\n' ||
				c[g - 1] == ','  ||
				c[g - 1] == '!'  ||
				c[g - 1] == ';'  ||
				c[g - 1] == '.'  ||
				c[g - 1] == '?'  ||
				c[g - 1] == '"'  ||
				c[g - 1] == '(' ||
				c[g - 1] == ')' ||
				c[g - 1] == '{' ||
				c[g - 1] == '}' ||
				g == 0)
			c[g] -= 32;
		g++;
	}
	return (c);
}
