/**
 * file name :101-natural.c
 * Auth: mubarak musad atta
 */
#include "main.h"
#include <stdio.h>
/**
 * main - Prints the natural numbers below of 3 or 5 below.
 * @th: Is the counter
 * @fi: Is the limiter
 * @sum: Prints the sum of all the multiples
 * Return: Nothing.
 */
int main(void)
{
	int th, fi, sum;

	fi = 1024;
		for (th = 0; th < fi; th++)
			if (th % 3 == 0 || th % 5 == 0)
			sum += th;
		printf("%d\n", sum);
		return (0);
}
