#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints all arguments it receives.
 * @argc: is count of the argv
 * @argv: is an array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}
	return (0);
}
