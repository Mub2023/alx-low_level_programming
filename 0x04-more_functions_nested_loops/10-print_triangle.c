#include "main.h"
/**
 * print_triangle - a function that prints a triangle,
 *  followed by a new line.
 *  @size: is the size of the triangle
 *  Return: Always 0 (success)
 */
void print_triangle(int size)
{
	int fat, fast;

	if (size > 0)
	{
		for (fat = 0; fat < size; fat++)
		{
			for (fast = 0; fast < size; fast++)
			{
				if (fast < size - (fat + 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
