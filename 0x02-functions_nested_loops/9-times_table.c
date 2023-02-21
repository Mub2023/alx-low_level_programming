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
	int hi;

	for (hi = 0; hi <= 9; hi++)
		_putchar(hi * 0);
	_putchar(hi * 0);
	_putchar(',');
	_putchar(' ');
	_putchar(hi * 1);
		_putchar(',');
		_putchar(' ');
	_putchar(hi * 2);
	_putchar(',');
	_putchar(' ');
	_putchar(hi * 3);
	_putchar(',');
	_putchar(' ');
	_putchar(hi * 4);
	_putchar(',');
	_putchar(' ');
	_putchar(hi * 5);
	_putchar(',');
	_putchar(' ');
	_putchar(hi * 6);
	_putchar(',');
	_putchar(' ');
	_putchar(hi * 7);
	_putchar(',');
	_putchar(' ');
	_putchar(hi * 8);
	_putchar(',');
	_putchar(' ');
	_putchar(hi * 9);
}
