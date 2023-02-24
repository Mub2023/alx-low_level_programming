#include "main.h"
/**
 * print_number - prints an integer
 * @n: the prints numbers
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	unsigned int mm = n;

	if (n < 0)
	{
		_putchar('-');
		mm = -mm;
	}
	if ((mm / 10) > 0)
		print_number(mm / 10);

	_putchar((mm % 10) + '0');
}
