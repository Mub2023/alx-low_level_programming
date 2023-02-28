#include "main.h"
/*
 * Auth:mubarak musad atta
 */
/**
 * puts_half - a function that prints half of a string,
 *  followed by a new line.
 *  @str: is the pointer of string.
 *  Retrun: Always 0 (success)
 */
void puts_half(char *str)
{
	int p = 0, c, b;

	while (str[p] != '\0')
		p++;

	if (p % 2 == 0)
		b = p / 2;

	else
		b = (p + 1) / 2;

	for (c = b; c < p; c++)
		_putchar(str[c]);

	_putchar('\n');
}
