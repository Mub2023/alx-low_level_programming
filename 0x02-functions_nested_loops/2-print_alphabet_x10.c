#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase x10
 *
 * Return: nothing on Success
 */
void print_alphabet_x10(void)
{
	int sad, nd, count;

	sad = 97;
		nd = 122;
		count = 1;
		while (count <= 10)
		{
			while (sad <= nd)
			{
				_putchar(sad);
				sad++;
			}
			_putchar('\n');

			sad = 97;
			count++;
		}
}
