#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 **/
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
putchar(a);
putchar('\n');
}
