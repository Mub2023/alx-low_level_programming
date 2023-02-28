#include "main.h"
#include <stdio.h>
/**
 * main - a program that generates random valid passwords
 *  for the program 101-crackme
 *  Return: Always 0
 */
int main(void)
{
	int word[100];
	int w, sum, q;

	sum = 0;
	srand(time(NULL));

	for (w = 0, w < 100, w++)
	{
	word[w] = rand() % 78;
sum += (word[w] + '0');
putchar(pass[w] + '0');
if ((2772 - sum)-'0' < 78)
{
	q = 2772 - sum - '0';
	sum += q;
	putchar(q + '0');
	break;
}
}

return (0)
	}
