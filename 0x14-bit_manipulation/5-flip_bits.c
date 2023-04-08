#include "main.h"
/**
 * flip_bits - the number of bits needed to
 * flip from one number to another.
 * @n: is input integer.
 * @m: is another input integer.
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int c, e = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		c = e >> x;
		if (c & 1)
			count++;
	}
	return (count);
}
