/*
 * file : 9-times_table.c
 * Athu : mubarak muasd atta
 */
#include "main.h"
/**
 * prints - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int hi, x0, x1, x2, x3, x4, x5, x6, x7, x8, x9;

	for (hi = '0'; hi <= '9'; hi++)
	{
		x0 = hi * 0;
		_putchar(x0);
	_putchar(',');
	_putchar(' ');
	x1 = hi * 1;
	_putchar(x1);
		_putchar(',');
		_putchar(' ');
		x2 = hi * 2;
	_putchar(x2);
	_putchar(',');
	_putchar(' ');
	x3 = hi * 3;
	_putchar(x3);
	_putchar(',');
	_putchar(' ');
	x4 = hi * 4;
	_putchar(x4);
	_putchar(',');
	_putchar(' ');
	x5 = hi * 5;
	_putchar(x5);
	_putchar(',');
	_putchar(' ');
	x6 = hi * 6;
	_putchar(x6);
	_putchar(',');
	_putchar(' ');
	x7 = hi * 7;
	_putchar(x7);
	_putchar(',');
	_putchar(' ');
	x8 = hi * 8;
	_putchar(x8);
	_putchar(',');
	_putchar(' ');
	x9 = hi * 9;
	_putchar(x9);
	}
}
