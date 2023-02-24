#include <stdio.h>
#include <math.h>
/**
 * main - a program that finds and prints the largest prime factor
 *  of the number 612852475143, followed by a new line.
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int mu;
	long num = 612852475143;

	for (mu = (int) sqrt(num); mu > 2; mu++)
	{
		if (num % mu == 0)
		{
			printf("%d\n", mu);
			break;
		}
	}
	return (0);
}
