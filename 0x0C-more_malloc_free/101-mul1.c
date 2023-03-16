#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define ERR_MSg "Error"
/**
 * checker - check if the string contains a non- digit char
 * @s:string to check
 * Return: 0 if a non-digit is found ,1 otherwise
 */
int checker(char *s)
{
	int x;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}
/**
 * _len - return the length
 * @s:string to check
 * Return: the length of string
 */
int _len(char *s)
{
	int x;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * errors - handles errors for the main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two postive numbers
 * @argc: number of argument
 * @argv: array of argument
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int ln1, ln2, ln, x, carry, d1, d2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];

	if (argc != 3 || !checker(s1) || !checker(s2))
		errors();
	ln1 = _len(s1);
	ln2 = _len(s2);
	ln = ln1 + ln2 + 1;
	result = malloc(sizeof(int) * ln);

	if (!result)
		return (1);

	for (x = 0; x <= ln1 + ln2; x++)
		result[x] = 0;
	for (ln1 = ln1 - 1; ln1 >= 0; ln1--)
	{
		d1 = s1[ln1] - '0';
		carry = 0;
		for (ln2 = _len(s2) - 1; ln2 >= 0; ln2--)
		{
			d2 = s2[ln2] - '0';
			carry += result[ln1 + ln2 + 1] + (d1 * d2);
			result[ln1 + ln2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[ln1 + ln2 + 1] += carry;
	}
	for (x = 0; x < ln - 1; x++)
	{
		if (result[x])
			a = 1;
		if (a)
			_putchar(result[x] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');free(result);return (0);
}
