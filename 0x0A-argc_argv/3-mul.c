#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: is the count of the argv
 * @argv: is the array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result, n1;

	result = 1;
	for (n1 = 1; n1 < argc; n1++)
	{
		int x = strtol(argv[n1], NULL, 10);
		result *= x;
	}
	if (result == 1)
	{
		printf("Error\n");
	}
	else
	{
	printf("%d\n", result);
	}
	return (0);
}
