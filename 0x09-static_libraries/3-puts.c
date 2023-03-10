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
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
