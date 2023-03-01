#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: the first pointer of the string
 * @src: the second pointer of the string
 * @n: input value,
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cp;

	cp = 0;
	while (cp < n && src[cp] != '\0')
	{
		dest[cp] = src[cp];
		cp++;
	}
	while (cp < n)
	{
		dest[cp] = '\0';
		cp++;
	}
	return (dest);
}
