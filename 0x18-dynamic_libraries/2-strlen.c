#include "main.h"
/*
 * Auth:mubarak musad atta.
 */
/**
 * _strlen - a function that returns the length of a string.
 * @s:the number of bytes in the string pointed.
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int cd = 0;

	while (s[cd] != '\0')
	{
		cd++;
	}
	return (cd);
}
