#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int a = n;

	for (; m < a; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}
