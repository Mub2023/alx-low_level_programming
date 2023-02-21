#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 **/
int main(void)
{
	char me [8] = "_putchar";

	for (int t = 0; t < strlen(me); t++)
	{
		putchar(me[t]);
	}
	putchar('\n');
	return (0);
}
