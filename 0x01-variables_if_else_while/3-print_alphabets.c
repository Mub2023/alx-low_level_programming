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
	int bg;
	for (sa = 'a', sa<= 'z', sa++)
		putchar(sa);
	putchar('\n');
	for (bg = 'A', bg<= 'Z', bg++)
		putchar(bg);
	putchar('\n');
	return (0);
}
