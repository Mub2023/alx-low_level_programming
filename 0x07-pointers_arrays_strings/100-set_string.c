#include "main.h"
/**
 * set_string - a function that sets the value of a pointer to a char
 * @s: pointer of pointer of the string
 * @to: pointer of char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
