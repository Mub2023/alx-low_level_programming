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
	int sa;
	for (sa = 'A'; sa<= 'z'; sa++)
		putchar(sa);
	putchar('\n');
	return (0);
}
