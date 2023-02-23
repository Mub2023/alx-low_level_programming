/**
 * file name :101-natural.c
 * Auth: mubarak musad atta
 */
#include <stdio.h>
/**
 * main - Prints the natural numbers below 1024 .
 * @sum = Ruslt
 *
 * Return: Always 0.
 **/
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
