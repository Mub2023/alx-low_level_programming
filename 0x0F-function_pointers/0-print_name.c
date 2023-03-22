#include "function_pointers.h"
/**
 * print_name - a function that prints a name.
 * @name: is the pointer of the input name
 * @f:is array of pointer takes char as input
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
