#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 **/
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (n > 5)
		printf("Last digit of %d and is greater than 5", m);
	else if (n == 0)
		printf("Last digit of %d and is 0", m);
	else if ((n > 6) != 0)
		printf("Last digit of %d and is less than 6 and not 0", m);
	return (0);
}

