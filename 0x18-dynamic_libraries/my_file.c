#include <stdio.h>
#include <unistd.h>
/**
 * random - fixed numbers instead of random ones
 * Return: fixed numbers instead of random ones
 */
int random(void)
{
	static int x;
	int n[] = {8, 8, 7, 9, 23, 74};

	if (x > 5)
		x = 0;
	return (n[x++]);
}
