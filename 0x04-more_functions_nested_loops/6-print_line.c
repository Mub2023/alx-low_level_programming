#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: the number of times that the special character must be printed
 * Return: Always  0 (Success)
 */
void print_line(int n)
{
	int hi;

	hi = 1;
	while (hi <= n)
	{
		_putchar(95);
		hi++;
	}
	_putchar('\n');
}
