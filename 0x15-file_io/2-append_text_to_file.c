#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: Text content to be added.
 *
 * Return: 1 on success, -1 on failure or if the file does not exist.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filed; int newletters = 0; int rwrow = 0;

	if (!filename)
		return (-1);

	filed = open(filename, O_WRONLY | O_APPEND);

	if (filed == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[newletters])
			newletters++;

		rwrow = write(filed, text_content, newletters);
		if (rwrow == -1)
		{
			close(filed);
			return (-1);
		}
	}

	close(filed);
	return (1);
}
