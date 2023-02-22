/*
 * file : 11-print_to_98.c
 * Auth : mubarak musad atta
 */
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from input to 98,
 * in order separated by a comma followed by a space.
 * @b: The number to begin counting at.
 */
void print_to_98(int b)
{
	for (b = 0; b =< 98; b++)
	       _putchar(b);
	_putchar(',');
_putchar(' ');
}
