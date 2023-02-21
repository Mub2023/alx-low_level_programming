#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 **/
int main(void)
{
	unsigned char t;
	char ma[] = "_putchar";

	for (t = 0; t < strlen(ma); t++)
	{
		putchar(ma[t]);
	}
	putchar('\n');
	return (0);
}
