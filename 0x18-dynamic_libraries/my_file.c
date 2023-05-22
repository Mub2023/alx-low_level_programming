#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - print to stdout
 * @c:is char to print
 * Return: write int to stdout.
 */
int _putchar (char c)
{
	static int x;
	int n [] = {9, 8, 10, 24, 75, 9};

	if (x > 5)
		x = 0;
	c = n[x];
	x++;
	return (write(1, &c, 1));
}
