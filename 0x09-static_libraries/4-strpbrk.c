#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: is the pointer of the string
 * @accept: is the input bytes
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
				return (s);
		}
		s++;
	}
	return ('\0');
}
