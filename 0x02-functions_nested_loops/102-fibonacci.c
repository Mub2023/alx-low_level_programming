/**
 * file name :102-fibonacci.c
 */
#include <stdio.h>
/**
 * main  - Prints first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int d;
	unsigned long int u, c, k;

	u = 0;
	c = 1;

	for (d = 0; d < 50; d++)
	{
		k = u + c;
		printf("%lu", u);

		u = c;
		c = k;
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
