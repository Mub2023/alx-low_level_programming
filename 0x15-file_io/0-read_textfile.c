#include "main.h"
/**
 * read_textfile - reads a text file and prints it to POSIX standard output.
 * @filename: is the pointer of filename
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *p;
	ssize_t f, w, t;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	p = malloc(sizeof(char) * letters);
	t = read(f, p, letters);
	w = write(STDOUT_FILENO, p, t);

	free(p);
	close(f);
	return (w);
}
