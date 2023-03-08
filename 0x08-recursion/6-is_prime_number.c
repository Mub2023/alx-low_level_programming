#include "main.h"
/**
 * is_prime_number - checks if a number is prime
 * @n: the number will be checked
 * Return: 1 if the number is divisble .
 *  0 if the number is not divisble
 */
int is_prime_number(int n)
{
	int dv;

	if (n % dv == 0)
		return (0);

	if (dv % n / 2)
	{
		return (1);
	}


		return (is_number_prime(n, dv + 1));
}
