#include "main.h"
/**
 * _strcat -  a function that concatenates two strings.
 * @dest: is the pointer of the string the first string
 * @src: is the other pointer of the string second string
 * Return: The resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int g, f;

	g = 0;
	while (dest[g] != '\0')
	{
		g++;
	}
	f = 0;
	while (src[f] != '\0')
	{
		dest[g] = src[f];
			g++;
		f++;
	}
	dest[g] = '\0';
	return (dest);
}
