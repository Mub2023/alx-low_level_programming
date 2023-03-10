#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * check_number - checks string there are digits
 * @s: pointer of array
 * Return: Always 0 (Success)
 */
int check_number(char *s)
{
	unsigned int count;

	count = 0;
	while (count < strlen(s))
	{
		if (!isdigit(s[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - print the name of program
 * @argc: is the count of the array
 * @argv: is the array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count = 1, s_to_int, sum = 0;

	while (count < argc)
	{
		if (check_number(argv[count]))
	{
		s_to_int = _atoi(argv[count]);
		sum += s_to_int;
	}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);

	return (0);
}
