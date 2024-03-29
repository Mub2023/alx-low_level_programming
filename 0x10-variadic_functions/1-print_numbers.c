#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: Always 0 (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int x;

	va_start(numbers, n);

	for (x = 0 ; x < n; x++)
	{
		printf("%d", va_arg(numbers, int));

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(numbers);
}
