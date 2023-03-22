#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: is the array of char to search in.
 * @size: is the size of array
 * @cmp: is the pointer of the function used to compare
 * Return: first element of cmp or
 * If no element matches and if size <= 0 return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
		return (x);
	}
	return (-1);
}
