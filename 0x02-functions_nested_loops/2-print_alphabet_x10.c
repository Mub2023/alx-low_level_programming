#include "main.h"
/**
 * main - Entry point
 * 2-print_alphabet_x10.c
 * Return: Always 0 (Success)
 **/
void print_alphabet_x10(void)
{
	int count;
	int b;

	for (count = 0; count <= 9; count++)
			{
				for (b = 'a'; b <= 'z'; b++)
				_putchar(b);
			_putchar('\n');
		}
}
