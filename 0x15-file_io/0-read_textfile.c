#include "main.h"

/**
 * read_textfile - a function reads and prints the contents of a
 * text file up to a specified number of letters.
 * @filename: name of the file to be read.
 * @letters: number of letters to be printed.
 *
 * Return: number of letters printed; if it fails, it returns 0
 */

#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t nrd, nwr;

	if (!filename || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);
	free(buf);

	return (nwr);
}
