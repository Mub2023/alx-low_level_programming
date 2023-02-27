#include "main.h"
/*
 * Auth :mubarak musad atta
 */
/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: the string of input
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int st = 0;

	while (str[st] =! '\0')
	{
		_putchar(str[st]);
		st++;
	}
	_putchar('\n');
}
