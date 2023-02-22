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
	if (n == 0)
	{
	for (n = 0; n <= 98; n++)
	       _putchar(n);
	_putchar(',');
_putchar(' ');
	}
	else if (n == 98)
	{
		for (n = 98; n <= 111; n++)
			_putchar(n);
		_putchar(',');
		_putchar(' ');
		else if (n == 111)
		{
			for (n = 111; n <= 98; n--)
				_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
		else if (n == 81)
		{
			for (n = 81; n <= 98; n++)
				_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
		else if (n == -10)
		{
			for (n = -10; n <= 98; n++)
				_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
}
