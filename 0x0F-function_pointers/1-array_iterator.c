#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function given as a parameter
 * on each element of an array.
 * @array: is the pointer of intgers
 * @size: is the size of the array
 * @action: is pointer to functions used
 * Return:Always 0 (Success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
