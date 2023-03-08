/*
 * file name : 103-fibonacci.c
 * auth : muarak musad atta
 */
#include <stdio.h>
/**
 * main  - fibonacci numbers
 *
 * Return: Always 0
 **/
int main(void)
{
	unsigned long s, l, p;
	float y;

	s = 0;
		l = 1;
		while (1)
		{
			p = s + l;
			if (p > 4000000)
				break;

			if ((p % 2) == 0)
				y += p;

			s = l;
			l = p;
		}
	printf("%.0f\n", y);

	return (0);
}
