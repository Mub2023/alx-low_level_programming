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
	while (*s != '\0')
	{
		s++;
	}
	_putchar(strlen(s));
	return (*s);
}
