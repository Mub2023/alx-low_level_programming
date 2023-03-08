#include "main.h"
/**
 * is_prime_number - checks if a number is prime
 * @n: the number will be checked
 * Return: 1 if the number is prime .
 *  0 if the number is not prime
 */
int is_prime_number(int n)
{
	int m = n / 2;

	if (n <= 1)
		return (0);
	else if (n % m == 0)
	{
			return (1);
	}
	else
	{
		m = m - 1;
		is_prime_number(n);
	}
}
