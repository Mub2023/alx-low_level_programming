#include "main.h"
/**
 * print_most_numbers - a function that prints the numbers,
 *  from 0 to 9, followed by a new line.
 *  Return: 0 always
 */
void print_most_numbers(void)
{
	int me;

	for (me = '0'; me <= '9'; me++)
	{
		if ((me != '2') && (me != '4'))
			_putchar(me);
	}
	_putchar('\n');
}
