#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: is the count of the argv
 * @argv: is the array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /* ignore argv */
		printf("%d\n", argc - 1);
	return (0);
}
