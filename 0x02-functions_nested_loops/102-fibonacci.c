/**
 * file name :102-fibonacci.c
 */
#include <stdio.h>
/**
 * main  - Prints first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	long int u, c, k;

	u = 1;

	c = 2;

	for (d = 0; d <= 50; d++)
	{
		k = u + c;
		u = c;
		c = k;
		printf("%lu", k);
		if (d == 49)
		{
			printf("\n");
		}
		else
		{
			printf(",");
		}
	}

	return (0);
}
