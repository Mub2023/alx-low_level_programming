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
	int i, w;
	
	for (i = '0'; i <= '9'; i++)
	{
		for (w = '0'; w <= '9'; w++)
		{
			if (i < w)
			{
				 if (i != '8' && w != '9')
				putchar(i);
				putchar(w);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar ('\n');

	return (0);
}
