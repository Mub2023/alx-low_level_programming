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
		if ((me % 3 == 0) && (me % 5 == 0))
		printf("Fizz Buzz\n");
		else if (me % 3 == 0)
			printf("Fizz\n");
		else if (me % 5 == 0)
			printf("Buzz\n");
		else
			printf("%d\n", me);
	}
	return (0);
}
