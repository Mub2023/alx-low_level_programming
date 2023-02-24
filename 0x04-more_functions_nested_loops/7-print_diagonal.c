#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the termina
 * @n: is the number of times the character \ should be printed
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int ja, fa;

	ja = 0;
	while (n > 0)
	{
		fa = ja;
			while (fa > 0)
		{
			_putchar(' ');
			fa--;
		}
			_putchar('\\');
			_putchar('\n');
			ja++;
			n--;
	}
	if (ja < 1)
	{
		_putchar('\n');
	}
}
