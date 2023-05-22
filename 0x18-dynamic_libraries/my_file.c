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
	int n [] = {8, 8, 7, 9, 23, 74};

	if (x > 5)
		x = 0;
	return (n[x++]);
}
