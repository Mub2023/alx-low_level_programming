/**
 * file name :102-fibonacci.c
 */
#include <stdio.h>
/**
 * main  - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int d, u, c, k;

	u = 1;

	c = 2;

	for (d = 0; d <= 50; d++)
	{
		if (u != 20365011074)
		{
			printf("%ld, ", u);
		}
		else
		{
			printf("%ld\n", u);
		}
		k = u + c;
		u = c;
		c = k;
	}
	return (0);
}
