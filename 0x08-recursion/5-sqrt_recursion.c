#include "main.h"
int find_nat(int nb, int root);
int _sqrt_recursion(int n);
/**
 * find_nat - Finds the natural square root of an input number.
 * @nb: number to find the square root.
 * @root: the root test
 * Return: if the number has natural square root
 * - the natural square root of n
 */
int find_nat(int nb, int root)
{
	if ((root * root) == nb)
		return (root);

	if (root == nb / 2)
		return (-1);

	return (find_nat(nb, root + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: is the input integer
 * Return:If n does not have a natural square root return -1.
 */
int _sqrt_recursion(int n)
{
int root = 0;

if (n < 0)
return (-1);
if (n == 1)
return (1);

return (find_nat(n, root));
}
