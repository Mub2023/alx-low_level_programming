#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _at - converts a string to integer
 * @s: is the pointer
 * Return: the int converted
 */
int _at(char *s)
{
	int a = 0, d = 0, n = 0, len = 0, f = 0, digit = 0;

	while (s[len] != '\0')
	{
		if (s[a] == '-')
			++d;
		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}
	if (f == 0)
		return (0);

	return (n);
}
/**
 * main - multiplies two numbers
 * @argc: is the count of the argv
 * @argv: is the array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");

			return (1);
		}
		n1 = _at(argv[1]);

		n2 = _at(argv[2]);

		result = n1 * n2;


		printf("%d\n", result);
		return (0);
}
