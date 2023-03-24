#include "variadic_functions.h"
/**
 * print_strings -  prints strings, followed by a new line.
 * @separator:the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * Return: Always 0 (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	char *p;
	unsigned int x;

	va_start(s, n);
	for (x = 0; x < n; x++)
	{
		p = va_arg(s, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", p);
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(s);
}
