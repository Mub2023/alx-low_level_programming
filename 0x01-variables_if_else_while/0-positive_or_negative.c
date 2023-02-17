#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main -Entry point
*description : Positive anything is better than negative nothing
*Return : Always 0 (success)
**/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* print whether the number stored in the variable n is positive or negative */
	if (n > 0)
		printf("%d is positive\n", n);
		else if (n < 0)
			printf("%d is negative\n", n);
		else
			printf("%d is zero\n", n);
	return (0);
}
