/*
 *File: 100-times_table.c
 *Auth: mubarak nusad atta
 **/
#include "main.h"
/**
 * print_times_table - Prints the times table of the input
 * starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int h)
{
	int m, u, b;

	if (n >= 0 && n <= 15)
	{
		for (m = 0; m <= n; m++)
		{
			_putchar('0');

			for (u = 1; u <= n; u++)
			{
				_putchar(',');
				_putchar(' ');

				b = m * u
					if (b <= 99)
						_putchar(' ');
				if (b <= 9)
					_putchar(' ');

				if (b >= 100)
				{
					_putchar((b / 100) + '0');
					_putchar(((b / 10)) % 10 + '0');
				}
				else if (b <= 99 && b >= 10)
				{
					_putchar((b / 10) + '0');
				}
				_putchar((b % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
