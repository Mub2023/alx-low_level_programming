#include "variadic_functions.h"
/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n: the number of paramters
 * @...: A varibale number of paramters to calculate the sum
 * Return: 0 if n == 0 or return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list mm;
	unsigned int x, sum = 0;

	va_start(mm, n);

	for (x = 0; x < n; x++)
		sum += va_arg(mm, int);

	va_end(mm);
	return (sum);
}
