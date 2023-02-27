#include "main.h"
/**
 * Auth: mubarak musad atta
 */
/**
 * reset_to_98 -a function that takes a pointer to an int as parameter and
 *  updates the value it points to to 98.
 *  @*n: a pointer.
 *  Return: Always 0 (successs).
 */
void reset_to_98(int *n)
{
	int *d;

	d = &n;
	*d = 98;
}
