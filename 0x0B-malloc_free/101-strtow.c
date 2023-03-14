#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * count - to count the number of words in string
 * @s:evaluate string
 * Return: number of words
 */
int count(char *s)
{
	int f = 0, x, y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			f = 0;
		else
			if (f == 0)
			{
				f = 1;
				y++;
			}
	}
	return (y);
}
/**
 * strtow - splits a string into words.
 * @str: is the pointer of sting
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **split, *temp;

	int i, k = 0, len = 0, words, a = 0, start, end;

	while (*(str + len))
		len++;
	words = count(str);
	if (words == 0)
		return (NULL);

			split = (char **) malloc(sizeof(char *) * (words + 1));
	if (split == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
		if (a)
		{
			end = i;
			temp = (char *) malloc(sizeof(char) * (a + 1));
					if (temp == NULL)
					return (NULL);

					while (start < end)
						*temp++ = str[start++];
							*temp = '\0';
							split[k] = temp - a;
							k++;
							a = 0;
		}
	}
	else if (a++ == 0)
		start = i;
	}
	split[k] = NULL;
	return (split);
}
