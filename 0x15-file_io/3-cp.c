#include "main.h"
/**
 * buffer - Allocates 1024 bytes for buffer
 * @file: is the name of file
 * Return: pointer to new allocated memory
 */
char *buffer(char *file)
{
	char *bufer;

	bufer = malloc(sizeof(char) * 1024);

	if (bufer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (bufer);
}
/**
 * close_me - closes file descriptors
 * @f: The file descriptor to be closed
 */
void close_me(int f)
{
	int x;

	x = close(f);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}
/**
 * main - copies the contents of file to another
 * @argc: the number of argument entered
 * @argv:an array of pointers
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *bufer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	bufer = buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, bufer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(bufer);
			exit(98);
		}

		w = write(to, bufer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(bufer);
			exit(99);
		}

		r = read(from, bufer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);
	free(bufer);
	close_me(from);
	close_me(to);
	return (0);
}
