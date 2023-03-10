#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _at - converts a string to integer
 * @s: is the pointer
 */
/**
 * main - multiplies two numbers
 * @argc: is the count of the argv
 * @argv: is the array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result, n1, n2, x;

	        if (argc <= 1)
		{
			n1 = 0;
			n2 = 0;
			printf("Error\n");
			return (1);
		}
		else
		{
	n1 = strtol(argv[1], NULL, 10);
	n2 = strtol(argv[2], NULL, 10);
	for (x = 1; x < argc; x++)
	{
		result = n1 * n2;
	}
	printf("%d\n", result);
	return (0);
		}
}
