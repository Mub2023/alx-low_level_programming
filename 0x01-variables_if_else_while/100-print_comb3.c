#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
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
				putchar(i);
				putchar(w);
				if ((i != '8' || (i == '8' && w != '9')))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
