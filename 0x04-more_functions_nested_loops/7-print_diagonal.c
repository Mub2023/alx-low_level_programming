#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the termina
 * @n: is the number of times the character \ should be printed
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int ja, fa;

	if (n > 0)
	{
		for (ja = 0; ja < n; ja++)
		{
			for (fa = 0; fa < ja; ja++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
