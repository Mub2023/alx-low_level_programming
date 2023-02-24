#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers,
 *  from 0 to 14, followed by a new line.
 *  Return: Always 0 (Success).
 */
void more_numbers(void)
{
	int me, count;

	for (count = 0; count <= 9; count++)
	{
		for (me = '0'; me <= '14'; me++)
			_putchar(me);
	if (me == '14')
		_putchar('\n');
	}
}
