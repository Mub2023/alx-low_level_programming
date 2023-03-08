#include "main.h"
int checker(int number, int dv);
int is_prime_number(int n);
/**
 * checker - checks the number is divisble
 * @number: the input number
 * @dv: the divisor
 * Return: 0 if divisble, 1 if not divisble
 */
int checker(int number, int dv)
{
	if (number % dv == 0)
		return (0);

	if (dv == number / 2)
		return (1);

	return (checker(number, dv + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number will be checked
 * Return: 1 if the number is prime
 * 0 if the number is not prime
 */
int is_prime_number(int n)
{
	int dv = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (checker(n, dv));
}
