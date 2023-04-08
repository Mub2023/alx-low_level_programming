#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: is the unsigned long integer.
 * @index: s the index, starting from 0 of the bit
 * Return: val or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}
