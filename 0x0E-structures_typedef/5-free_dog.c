#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - a function that frees dogs.
 * @d: is the pointer of the struct
 * Return: Always 0 (Success)
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
