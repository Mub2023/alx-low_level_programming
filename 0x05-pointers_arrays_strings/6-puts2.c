#include "main.h"
/*
 * Auth: mubarak musad atta
 */
/**
 * puts2 - a function that prints every other character of a string,
 *  starting with the first character, followed by a new line.
 *  @str: A pointer to the string
 *  Retrun: Always 0 (Success)
 */
void puts2(char *str)
{
	int ww = 0, zz = 0;

	while (str[ww] != '\0')
		ww++;

	ww -= 1;

	for (; zz <= ww; zz += 2)
		_putchar(str[zz]);

	_putchar('\n');
}
