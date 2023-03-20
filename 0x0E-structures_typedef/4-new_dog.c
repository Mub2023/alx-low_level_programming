#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - that creates a new dog data.
 * @name: is the pointer of dog name
 * @age: is the float of dog age
 * @owner: is the pointer of fog owner name.
 * Return: NULL if fails, else return the struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
		int ln1, ln2;

	ln1 = strlen(name);
	ln2 = strlen(owner);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(sizeof(char) * (ln1 + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char) * (ln2 + 1));
	if (newdog->owner == NULL)
	{
		free(newdog);
		free(newdog->name);
		return (NULL);
	}
	strcpy(newdog->name, name);
	strcpy(newdog->owner, owner);
	newdog->age = age;
	return (newdog);
}
