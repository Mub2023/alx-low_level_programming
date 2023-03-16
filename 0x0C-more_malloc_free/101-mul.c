#include <stdio.h>
#include <stdlib.h>

/**
 * main - add two numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: Nothing
 */
int main(int argc, char **argv)
{
	int n1, n2, result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		result = n1 * n2;
		printf("%d\n", result);
		return (0);
	}
}
