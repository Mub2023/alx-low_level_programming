#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: is the input value
 * @av: pointer of pointer of string
 * Return: NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0, d = 0;
	char *myp;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
	}
	d += ac;

	myp = malloc(sizeof(char) * d + 1);
	if (myp == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			myp[c] = av[a][b];
		       c++;
		}
		if (myp[c] == '\0')
		{
			myp[c++] = '\n';
		}
	}
	return (myp);
}
