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
	for(int x = 'A'; x <= 'z'; x++)
	{
		char S = tolower(x);
		putchar(S);
	}
	return (0);
}
