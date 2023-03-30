#include "lists.h"
void first(void) __attribute__((constructor));

/**
 * first - prints string before main
 * Return: Always 0 (Success)
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
