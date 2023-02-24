#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints the numbers from 1 to 100,
 *  followed by a new line.
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int me;

	for (me = 1; me <= 100; me++)
	{
		if ((me % 3) == 0 && (me % 5) == 0)
		{
		printf("FizzBuzz ");
		}
		else if (me % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (me % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", me);
		}
	}
	printf("Buzz");
	printf("\n");
	return (0);
}
