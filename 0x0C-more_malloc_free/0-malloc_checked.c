#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - that allocates memory using malloc.
 * @b:is input value .
 * Return: pointer if (success) or 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	int *myp;

	myp = malloc(sizeof(b));

	if (myp == NULL)
	{
		exit(98);
	}
	return (myp);
}
