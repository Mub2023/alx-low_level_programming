#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number.
 * @n: is the input integer
 * Return: if n is lower than 0,return -1 to indicate an error.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	n *= factorial(n - 1);
	return (n);
}
