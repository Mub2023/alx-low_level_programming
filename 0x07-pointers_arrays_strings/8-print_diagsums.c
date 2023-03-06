#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals
 *  of a square matrix of integers.
 *  @a: input pointer for the muti-dimensional
 *  @size: input of bytes of the multi-dimensional
 *  Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum0 = 0, sum1 = 0, x;

	for (x = 0; x < size; x++)
	{
		sum0 = sum0 + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		sum1 += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", sum0, sum1);
}
