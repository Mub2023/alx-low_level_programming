#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: the size of the memory to print
 * @c: is initializes array of chars
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		array[x] = c;
	return (array);
}
