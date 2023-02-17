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
	int ma;

	for (ma = 'a'; ma <= 'z'; ma++)
		putchar(ma);
	putchar('\n');	
	return (0);
}
