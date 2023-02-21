#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - Entry point
 * description :'print_alphabet'
 * Return: Always 0 (Success)
 **/
void print_alphabet(void)
{
	char a;
	/*print_alphabet - prints the alphabet*/
	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
