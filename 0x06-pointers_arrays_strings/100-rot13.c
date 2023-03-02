#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13.
 * @x: pointer of the string
 * Return: x
 */
char *rot13(char *x)
{
	int a, b;
	char dt1[] =
	       "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dtrot[] =
	       "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; x[a] != '\0'; a++)
	{
	for (b = 0; b < 52; b++)
	{
	if (x[a] == dt1[b])
	{
	x[a] = dtrot[b];
	break;
	}
	}
	}
	return (x);
}
