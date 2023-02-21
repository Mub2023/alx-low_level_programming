/*
 * file : 7-print_last_digit.c
 * Auth :mubarak musad atta
 */
#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @c: The number in question.
 * Return: @m The value of the last digit,
 */
int print_last_digit(int c)
{
	int m;

	m = c % 10;
	if (m < 0)
		m *= -1;
	_putchar(m + '0');
		return (m);
}
