#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: is the count of array argv
 * @argv: is the pointer of array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, x;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p = (char *)main;
	for (x = 0; x < bytes; x++)
	{
		if (x == bytes - 1)
		{
			printf("%02hhx\n", p[x]);
			break;
		}
		printf("%02hhx", p[x]);
	}
	return (0);
}
