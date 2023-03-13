#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: is the width of 2 dimensional array
 * @height: is the height of 2 dimensional array
 * Return: NULL on failure or
 *  If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **myp;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	myp = malloc(sizeof(int *) * height);
		if (myp == NULL)
			return (NULL);
			for (a = 0; a < height; a++)
			{
				myp[a] = malloc(sizeof(int) * width);

				if (myp[a] == NULL)
				{
					for (; a >= 0; a--)
						free(myp[a]);
					free(myp);
					return (NULL);
				}
			}
		for (a = 0; a < height; a++)
		{
			for (b = 0; b < width; b++)
				myp[a][b] = 0;
		}
		return (myp);
}
