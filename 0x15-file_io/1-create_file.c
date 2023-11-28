#include "main.h"

/**
 * create_file - A function that creates a file and writes content to it
 * @filename: name of the file to create
 * @text_content: content to be written into the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int filed, newletters, rwrow;

	if (!filename)
		return (-1);

	filed = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filed == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	newletters = 0;
	while (text_content[newletters])
		newletters++;

	rwrow = write(filed, text_content, newletters);

	close(filed);

	return ((rwrow == -1) ? -1 : 1);
}
