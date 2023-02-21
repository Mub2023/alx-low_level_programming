#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 **/
void print_alphabet_x10(void)
{
	int count;
	int b;
	
	count = 0;
	if (count <= 9)
		count++;
			else
			{
				for (b = 'a'; b <= 'z'; b++)
				_putchar(b);
			_putchar('\n');
		}
}
