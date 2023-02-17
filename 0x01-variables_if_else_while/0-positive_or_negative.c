#include <stdio.h>
#include <time.h>
/**
 *  * main -Entry point
 *   * description : Positive anything is better than negative nothing
 *    * Return : Always 0 (success)
 *     * */
int main (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("is is positive\n");
		else(n<0)
			printf("is negative\n");
		else(n==0)
			printf("is zero\n");
	}
	return (0);
}

