#include "main.h"
/*
 * Auth : mubarak musadatta
 */
/**
 * print_rev - a function that prints a string,
 *  in reverse, followed by a new line.
 * @s: is the pointer to the string
 * Retrun: Always 0 (Success)
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	while (c !=  0)
	{
		_putchar(s[c]);
	c--;
	}
	_putchar('\n');
}
