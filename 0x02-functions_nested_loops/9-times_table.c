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
	int hi, wo, bye;

	for (hi = 0; hi <= 9; hi++)
	{
	_putchar('0');
	for (wo = 1; wo <= 9; wo++)
	{
	_putchar(',');
	_putchar(' ');

	bye = hi * wo;

	if (bye <= 9)
	_putchar(' ');
	else
		_putchar((bye / 10 + '0'));

		_putchar((bye % 10 + '0'));
	
	}
	_putchar('\n');
	}
}
