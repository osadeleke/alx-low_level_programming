#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to filename
 * @text_content: text to be appended.
 *
 * Return: 1 on success, -1 otherwise.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count;
	ssize_t w;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		count = 0;
		while (text_content[count])
			count++;

		w = write(fd, text_content, count);
		if (w == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
