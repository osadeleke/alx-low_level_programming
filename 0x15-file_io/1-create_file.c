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
	int fd, length;

	if (filename == NULL)
		return (-1);

	while (text_content[length])
		length++;

	/** open file **/
	fd = open(filename, O_CREAT | O_WRONLY, 0600);

	/** process open file **/
	write(fd, text_content, length);

	/** close file **/
	close(fd);

	return (1);
}
