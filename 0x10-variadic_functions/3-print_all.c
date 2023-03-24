#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 * Return: Always 0(Success)
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *s, *s1 = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
				printf("%s%c", s1, va_arg(list, int));
				break;
				case 'i':
				printf("%s%d", s1, va_arg(list, int));
				break;
				case 'f':
				printf("%s%f", s1, va_arg(list, double));
				break;
				case 's':
				s = va_arg(list, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", s1, s);
				break;
				default:
				x++;
				continue;
			}
			s1 = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(list);
}

