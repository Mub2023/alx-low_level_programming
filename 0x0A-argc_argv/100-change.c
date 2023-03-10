#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - prints the minimum number of coins
 * @argc: is the count of argv
 * @argv: is the array
 * Return: 1 number of arguments passed is not exactly 1 else 0
 */
int main(int argc, char *argv[])
{
	int number, b, result = 0;

	int coins[] = {25, 10, 5, 2, 1};

		if (argc != 2)
		{
			printf("Error\n");
			return (1);
		}
		number = atoi(argv[1]);

		if (number < 0)
		{
			printf("0\n");
			return (0);
		}
		for (b = 0; b < 5 && number >= 0; b++)
		{
			while (number >= coins[b])
			{
				result++;
				number -= coins[b];
			}
		}
		printf("%d\n", result);
		return (0);
}
