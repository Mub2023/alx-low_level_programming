#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename:is the name of the file
 * @text_content: is the NULL terminated string to add at end of file
 * Return:1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	w = write(x, text_content, len);

	if (x == -1 || w == -1)
		return (-1);

	close(x);
	return (1);
}
