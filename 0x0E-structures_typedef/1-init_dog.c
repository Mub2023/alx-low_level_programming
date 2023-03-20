#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: is the pointer of initialize the struct
 * @name: is the pointer of dog name
 * @age: is the float of dog age
 * @owner: is the pointer of the owner of the name
 * Return: Always 0 (success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
