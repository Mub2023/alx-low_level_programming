#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 **/
int main (void) 
{
	char sa;
       	char e;
	char q;

	e = 'e';
		q = 'q';

	for(sa = 'a';sa <= 'z' ; sa++)
	(sa != e && sa != q)
		putchar(sa);
	putchar('\n');
	return (0);
}
