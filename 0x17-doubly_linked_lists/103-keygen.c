#include "lists.h"
/**
 * main - generates and prints password for crackme6.
 * @argc: unused.
 * @argv: an array of pointer .
 * Return: Always 0 (Success).
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char pass[7], *index;
	int lenth = strlen(argv[1]), x, tmp;

	index = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmp = (lenth ^ 59) & 63;
	pass[0] = index[tmp];

	tmp = 0;
	for (x = 0; x < lenth; x++)
		tmp += argv[1][x];
	pass[1] = index[(tmp ^ 79) & 63];

	tmp = 1;
	for (x = 0; x < lenth; x++)
		tmp *= argv[1][x];
	pass[2] = index[(tmp ^ 85) & 63];

	tmp = 0;
	for (x = 0; x < lenth; x++)
	{
		if (argv[1][x] > tmp)
			tmp = argv[1][x];
	}
	srand(tmp ^ 14);
	pass[3] = index[rand() & 63];

	tmp = 0;
	for (x = 0; x < lenth; x++)
		tmp += (argv[1][x] * argv[1][x]);
	pass[4] = index[(tmp ^ 239) & 63];

	for (x = 0; x < argv[1][0]; x++)
		tmp = rand();
	pass[5] = index[(tmp ^ 229) & 63];

	pass[6] = '\0';
	printf("%s", pass);
	return (0);
}
