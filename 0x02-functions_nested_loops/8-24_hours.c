/*
 * file : 8-24_hours.c
 * Auth : mubarak musad atta
 */
#include "main.h"
/**
 * 8-24_hours - prints every minute of the day of Jack Bauer
 * @h,@m : prints from 00:00 to 23:59.
 * Return : Always 0 (Success)
 */
void jack_bauer(void)
{
	int h, M;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
		}
	}
}
