#include "main.h"
/**
 * _strcpy - a function that copies the string pointed to by src
 * , including the terminating null byte (\0),
 *  to the buffer pointed to by dest.
 *  @dest: pointer of the string will be copy to
 *  @src: pointer of string will be copy from
 *  Return: dest a pointer
 */
char *_strcpy(char *dest, char *src)
{
	char *me = dest;

	while (*src)
		*dest++ = *src++;
	return (me);
}
