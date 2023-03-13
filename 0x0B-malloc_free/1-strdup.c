#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer of the memory loaction
 * Return: pointer to a new string and duplicate of the string str.
 */
char *_strdup(char *str)
{
	int b = 0, c = 0;
	char *String;

	if (str == NULL)
		return (NULL);

	while (str[b] != '\0')
	       b++;
string = malloc(sizeof(char) * (b + 1));

if (string == NULL)
	return (NULL);

for (c = 0; str[c]; c++)
	string[c] = str[c];
return (string);
}
