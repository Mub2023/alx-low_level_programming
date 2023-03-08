#include "main.h"
/**
 * is_prime_number - that returns 1 if the input integer is a prime number
 * , otherwise return 0.
 * @n: is rhe input integer
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n % (is_prime_number(n - 1)) == 0)
		return (0);
	else
		return (1);
}
