#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 **/
void print_alphabet_x10(void)
{
	int count;
	char b;

		for (count = 0; count <= 9; count++)	
	for (b = 'a';b <= 'z'; b++)
		_putchar(b);
	_putchar('\n');
}
