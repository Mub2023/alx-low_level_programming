#include "main.h"
/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: is the pointer of the string
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
