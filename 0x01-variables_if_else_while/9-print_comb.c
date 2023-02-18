#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 **/
int main(void)
{
	int hi;

	for (hi = '0';hi >= '9';hi++)
	{
		putchar(hi);
			if (hi !='9')
		{
			putchar(',');
			putchar(' ');
		}
putchar('\n');

return (0);
}
