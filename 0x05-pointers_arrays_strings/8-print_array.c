#include <stdio.h>
#include "main.h"
/**
 * print_array - a function that prints n elements of
 * an array of integers, followed by a new line.
 * @a:is pointer of integers
 * @n: Is the number of elements of the array to be printed
 * Retrun: Always 0(Success)
 */
void print_array(int *a, int n)
{
	int g = 0;

	for (; g < n; g++)
	{
		printf("%d", a[g]);
		if (g < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
