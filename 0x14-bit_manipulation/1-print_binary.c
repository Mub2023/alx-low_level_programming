#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: is the number to convert
 * Return: Always 0 (Success)
 */
void print_binary(unsigned long int n)
{
	int x, count = 0;
	unsigned long int b;

	for (x = 63; x >= 0; x--)
	{
		b = n >> x;

		if (b & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
