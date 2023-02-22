/*
 * file : 9-times_table.c
 * Athu : mubarak muasd atta
 */
#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int hi, wo, count, sum;

	hi = 0;
	wo = 9;
	count = 0;
	while (count <= 9)
	{
		while (hi <= wo)
		{
		sum = count * hi

			if (hi != 0)
			{
				_putchar(',');
				if (sum < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}
		if (sum < 10)
			_putchar(sum + '0');
		else
		{
			_putchar(sum / 10 + '0');
		_putchar(sum % 10 + '0');
		}
		if (hi == wo)
			_putchar('\n');
		hi++;
		}
		hi = 0;
	}
}
