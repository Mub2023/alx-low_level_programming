#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * description :prints all possible combinations of two two-digit
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int a, b, c, d, sum;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					if (((d + c) > (a + b) && c >= a) || a < c)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						sum = a + b + c + d;
						if (sum == 227 && a == 57)
						{
							break;
						}
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
