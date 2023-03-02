#include "main.h"
/**
 * rev_string - reverse array
 * @n:  integer params
 * Return: 0
 */
void rev_string(char *n)
{
	int x = 0, y = 0;
	char temp;

	while (*(n + x) != '\0')
	{
		x++;
	}
	x--;

	for (y = 0; y < x; y++, x--)
	{
		temp = *(n + y);
		*(n + y) = *(n + x);
		*(n + x) = temp;
	}
}

/**
 * infinite_add - a function that adds two numbers.
 * @n1: is number 1
 * @n2: is number 2
 * @r: is the buffer to  store the result
 * @size_r: is the buffer size
 * Return: pointer to calling fucnction
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int overflow = 0, a = 0, b = 0, digits = 0;
int vl1 = 0, vl2 = 0, temp_tot = 0;

while (*(n1 + a) != '\0')
	a++;
while (*(n2 + b) != '\0')
	b++;
a--;
b--;
if (b >= size_r || a >= size_r)
	return (0);
while (b >= 0 || a >= 0 || overflow == 1)
{
	if (a < 0)
		vl1 = 0;
	else
		vl1 = *(n1 + a)-'0';
	if (b < 0)
		vl2 = 0;
	else
		vl2 = *(n2 + b)-'0';
	temp_tot = vl1 + vl2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
	if (digits >= (size_r - 1))
		return (0);
	*(r + digits) = (temp_tot % 10) + '0';
	digits++;
	b--;
	a--;
}
if (digits == size_r)
{
	return (0);
}
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
	}
