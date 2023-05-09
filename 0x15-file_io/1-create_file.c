#include "main.h"

/**
 * create_file - creates a file.
 * @filename: pointer to filename
 * @text_content: pointer to string to be writen into file.
 *
 * Return: 1 if successful, -1 otherwise.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w;
	ssize_t length;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[length])
		length++;

	/** open file **/
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		exit(-1);
	/** process open file **/
	w = write(fd, text_content, length);
	if (w == -1)
		exit(-1);
	/** close file **/
	close(fd);

	return (1);
}
