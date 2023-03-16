#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - that creates an array of integers.
 * @min:an array to sort and change
 * @max: and array to sort and change
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *myp;
	int a, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	myp = malloc(sizeof(int) * size);

	if (myp == NULL)
		return (NULL);

	for (a = 0;  min <= max; a++)
		myp[a] = min++;
	return (myp);
}
