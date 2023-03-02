#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @g: is the pointer of the string
 * Return: g
 */
char *leet(char *g)
{
	int h, x;
	char s0[] = "aAeEoOtTIL";
	char s1[] = "4433007711";

	for (h = 0; g[h] != '\0'; h++)
	{
		for (x = 0; x < 10; x++)
		{
			if (g[h] == s0[x])
			{
				g[h] = s1[x];
			}
		}
	}
	return (g);
}
