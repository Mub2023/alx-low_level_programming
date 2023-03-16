#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _mem - fills memory with constant byte
 * @x:memory area to be filled
 * @y: char to copy
 * @z:number of times to copy y
 * Return: pointer to the memory
 */
char *_mem(char *x, char y, unsigned int z)
{
	unsigned int i;

	for (i = 0; i < z; i++)
	{
		x[i] = y;
	}
	return (x);
}

/**
 * _calloc - that allocates memory for an array, using malloc.
 * @nmemb: an array
 * @size: is number bytes in nmemb
 * Return:  pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *myp;

	if (nmemb == 0 || size == 0)
		return (NULL);

	myp = malloc(size * nmemb);

	if (myp == NULL)
		return (NULL);

	_mem(myp, 0, nmemb * size);

	return (myp);
}
