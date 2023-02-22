/*
 * file : 11-print_to_98.c
 * Auth : mubarak musad atta
 */
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from input to 98,
 * in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
	while (n < 98)
		n++;
	       _putchar(n);
	_putchar(',');
_putchar(' ');
	}
	else (n > 98)
	{
		while (n > 98)
			n--;
			_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
}
