#include "main.h"
/**
 * print_square - a function that prints a square,
 *  followed by a new line.
 *  @size: is the size of the square
 *  Return: Always 0 (Success)
 */
void print_square(int size)
{
	int gr, rr;

	if (size > 0)
	{
		for (gr = 0; gr < size; gr++)
		{
			for (rr = 0; rr < size; rr++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
