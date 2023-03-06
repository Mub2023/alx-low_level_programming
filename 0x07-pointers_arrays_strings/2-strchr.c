#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: the pointer of the string
 * @c: input char
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int me;

	for (me = 0; s[me] >= '\0'; me++)
	{
		if (s[me] == c)
			return (&s[me]);
	}
	return (0);
}
