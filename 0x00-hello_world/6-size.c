#include <stdio.h>
/**
 * main - Entry point
 * description :prints the size of various types
 * Return: Always 0 (Success)
 **/
int main(void)
{
	char Chtype;
	int intType;
	long int LoIntType;
	long long int LoLoIntType;
	float FloatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(ChType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(LoIntType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(LoLoIntType));
	printf("Size of a float: %zu byte(s)\n", sizeof(FloatType));
	return (0);
}
