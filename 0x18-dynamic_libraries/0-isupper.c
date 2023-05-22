#include "main.h"
#include <stdio.h>
/**
 * _isupper - Function that checks for uppercase character
 * @c: input
 * Return: 1 if c is uppercasem, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
