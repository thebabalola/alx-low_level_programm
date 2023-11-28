#include "main.h"

/**
 * errorCheckFiles - Function that checks if files can be opened.
 * @file_from: source file descriptor.
 * @file_to: destination file descriptor.
 * @argv: The arguments vector.
 *
 * Return: No return value, as it is void.
 */

void errorCheckFiles(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can not read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can not write to %s\n", argv[2]);
		exit(99);
	}
}


/**
 * main - Copies contents from one file to another.
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return: 0 for success.
 */
int main(int argc, char *argv[])
{
	int files_from, files_to;
	ssize_t newchars, newr;
	char bufs[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	files_from = open(argv[1], O_RDONLY);
	files_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	errorCheckFiles(files_from, files_to, argv);

	do {
		newchars = read(files_from, bufs, sizeof(bufs));
		if (newchars == -1)
			errorCheckFiles(-1, 0, argv);
		newr = write(files_to, bufs, newchars);
		if (newr == -1)
			errorCheckFiles(0, -1, argv);
	} while (newchars > 0);

	if (close(files_from) == -1 || close(files_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can not close file descriptors\n");
		exit(100);
	}

	return (0);
}
