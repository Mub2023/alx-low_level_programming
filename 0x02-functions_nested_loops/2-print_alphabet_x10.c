#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * */
void print_alphabet_x10(void)
{
	char a;
	int count = 0;

		while (count++ <= 9)
		{
	for (a = 'a';a <= 'z'; a++)
		_putchar('a');
	_putchar('\n');
		}
}
