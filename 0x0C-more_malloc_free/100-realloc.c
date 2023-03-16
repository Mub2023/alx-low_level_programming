#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr:a pointer to previously allocated with a call to malloc
 * @old_size:the size, in bytes, of the allocated space for ptr
 * @new_size:the new size, in bytes of the new memory block
 * Return: Always 0 (Success)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *oldp;
	char *p;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

				p = malloc(new_size);

				if (!p)
				return (NULL);

				oldp = p;

				if (new_size < old_size)
				{
				for (x = 0; x < new_size; x++)
				p[x] = oldp[x];
				}
				if (new_size > old_size)
				{
				for (x = 0; x < old_size; x++)
				p[x] = oldp[x];
				}
				free(ptr);
				return (p);
}
