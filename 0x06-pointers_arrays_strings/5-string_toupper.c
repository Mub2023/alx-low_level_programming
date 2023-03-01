#include "main.h"
/**
 * string_toupper - a function that changes all lowercase to uppercase.
 * @b: is the pointer of the string
 * Return: b
 */
char *string_toupper(char *b)
{
	int kk;

	kk = 0;
	while (b[kk] != '\0')
	{
		if (b[kk] >= 'a' && b[kk] <= 'z')
			b[kk] = b[kk] - 32;
		kk++;
	}
	return (b);
}
