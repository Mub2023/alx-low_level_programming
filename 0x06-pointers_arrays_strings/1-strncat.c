#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: the pointer of the first string
 * @src: the pointer of the second string
 * @n: is the integer return bytes to dest
 * Return: the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int t, y;

	t = 0;
	while (dest[t] != '\0')
	{
		t++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[t] = src[y];
		t++;
		y++;
	}
	dest[t] = '\0';
	return (dest);
}

