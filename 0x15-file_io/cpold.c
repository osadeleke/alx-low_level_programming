#include "main.h"

/**
 * main - copy content of a file to another file
 * @argc: number of arguments
 * @argv: pointer to an array of the arguments
 *
 * Return: 1 if successful, -1 otherwise
 */

int main(int argc, char **argv)
{
	int ff, ft, cf, ct, count;
	ssize_t r, w;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	ff = open(argv[1], O_RDONLY);
	if (ff == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	ft = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (ft == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	r = read(ff, buf, 1024);
	if (r == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	while(buf[count])
		count++;

	w = write(ft, buf, count);
	if (w == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	cf = close(ff);
	if (cf == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", ff);
		exit(100);
	}

	ct = close(ft);
	if (ct == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", ft);
		exit(100);
	}

	return (1);
}
