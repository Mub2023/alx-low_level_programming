#include "main.h"
int checker(int number, int dv);
int is_prime_number(int n);
/**
 * checker - checks if a number is divisable
 * @number: the number will be checked
 * @dv: th divisor
 * Return: 0 if the number is divisble .
 *  1 if the number is not divisble
 */
int checker(int number, int dv)
{
	if (number % dv == 0)
		return (0);

	if (dv % number / 2)
	{
		return (1);
	}


		return (checker(number, dv + 1));
}
