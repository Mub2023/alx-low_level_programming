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
	int hex;
	int ex;

	for (hex = '0'; hex <= 'f'; hex++)
		putchar(hex);
	for (ex = 'a'; ex <= 'f'; ex++)
		putchar(ex);
	putchar('\n');

		return (0);
}
