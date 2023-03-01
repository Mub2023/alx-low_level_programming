#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: is the pointer of the integers
 * @n: is the number of elements of the array
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int w, e;

	for (w = 0; w < n--; w++)
	{
		e = a[w];
			a[w] = a[n];
			a[n] = e;
	}
}
