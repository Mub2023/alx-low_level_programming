/*
 * file : 104-fibonacci.c
 * Athu : mubarak musad atta
 */
#include <stdio.h>
/**
 * main - computer class print first 98 Fibonacci numbers, starting with
 * Return: 0 Success
 */
int main(void)
{
	int count;
	unsigned long a = 0, b = 1, sum;
	unsigned long a_1, a_2, b_1, b_2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = a + b;
		printf("%lu, ", sum);

		a = b;
		b = sum;
	}

	a_1 = a / 10000000000;
	b_1 = b / 10000000000;
	a_2 = a % 10000000000;
	b_2 = b % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = a_1 + b_1;
			half2 = a_2 + b_2;
			if (a_2 + b_2 > 9999999999)
			{
				half1 += 1;
				half2 %= 10000000000;
			}
			printf("%lu%lu", half1, half2);
			if (count != 98)
			printf(", ");

			a_1 = b_1;
				a_2 = b_2;
				b_1 = half1;
			b_2 = half2;
	}
	printf("\n");

	return (0);
}
