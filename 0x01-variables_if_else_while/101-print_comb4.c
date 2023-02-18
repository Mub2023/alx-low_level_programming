#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * */
int main(void)
{
	int z, a, c;

	for (z = '0';z <= '9'; z++)
	{
		for (a = '0';a <= '9'; a++)
		{
			for (c = '0';c <= '9'; c++)
			{
				if (z < a && a < c)
				{
					putchar(z);
					putchar(a);
					putchar(c);
					if (c != '7')
						putchar(',');
							putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
