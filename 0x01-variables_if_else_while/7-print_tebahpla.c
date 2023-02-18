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
	char re;

	for (re = 'z'; re >= 'a'; re--)
		putchar(re);
	putchar('\n');

	return (0);
}
