#include "main.h"
#include <stdio.h>
/**
 * print_buffer - a function that prints a buffer
 * @b: is the pointer
 * @size: is the size bytes of the buffer pointed by b
 * Return: Always 0 (Success)
 */
void print_buffer(char *b, int size)
{
	int a, d, c;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		d = size - a < 10 ? size - a : 10;
		printf("%08x:", a);
		for (c = 0; c < 10; c++)
		{
			if (c < d)
				printf("%02x", *(b + a + c));
			else
				printf(" ");
			if (c % 2)
			{
				printf(" ");
			}
		}
		for (d = 0; d < c; d++)
		{
			int w = *(b + a + d);

			if (w < 32 || c > 132)
			{
				w = '.';
			}
			printf("%c", w);
		}
		printf("\n");
		a += 10;
	}
}
