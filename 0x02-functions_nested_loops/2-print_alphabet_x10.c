#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * */
void print_alphabet_x10(void)
{
	int count;
	char a;

		for (count = 0; count <= 9; count++)
		{
	for (a = 'a';a <= 'z'; a++)
		_putchar('a');
	_putchar('\n');
		}
}
