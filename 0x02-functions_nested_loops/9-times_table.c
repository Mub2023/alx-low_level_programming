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
	int hi, wo, sum;

	for (hi = 0; hi < 10 ; hi++)
	{
		for (wo = 0; wo < 10; wo++)
		{
			sum = hi * wo;
			if (wo == 0)
				_putchar(sum + '0');
			if (wo != 0 && sum < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(sum + '0');
			}
			else if (sum >= 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((sum / 10) + '0');
				_putchar((sum % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
