#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to filename
 * @text_content: pointer to text content
 *
 * Return: 1 if successful, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;
	int count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	count = 0;
	while (text_content[count])
		count++;

	w = write(fd, text_content, count);

	if (w == -1)
		return (-1);

	close(fd);

	return (1);
}
