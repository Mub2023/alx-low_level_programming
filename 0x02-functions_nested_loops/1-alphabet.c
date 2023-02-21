#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - Entry point
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 **/
 void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
