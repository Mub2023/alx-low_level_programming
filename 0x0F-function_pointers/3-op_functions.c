#include "3-calc.h"
#include <stdio.h>
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - add two integer
 * @a: input number
 * @b: input integer
 * Return: the result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two integer
 * @a: input integer
 * @b: input integer
 * Return: the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multbliy two integer
 * @a: input integer
 * @b: input integer
 * Return: the result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division two integer
 * @a: input integer
 * @b: input integer
 * Return: the result
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of the division of two integer
 * @a: input integer
 * @b: input integer
 * Return: the result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
