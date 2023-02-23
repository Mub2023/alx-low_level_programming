/*
 * file : 11-print_to_98.c
 * Auth : mubarak musad atta
 */
#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from input to 98,
 * in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */
void print_to_98(int n)
{
	int mu;

	if (n > 98)
	{
		for (mu = n; mu > 98; mu--)
			printf("%d, ", mu);
	}
	else
	{
		for (mu = n; mu < 98; mu++)
			printf("%d, ", mu);
	}
	printf("98\n");
}
