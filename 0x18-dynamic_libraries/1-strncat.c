#include "main.h"

/**
 * _strncat - Concatenate two strings, limiting to n bytes.
 *
 * @dest: Destination string.
 * @src: Source string.
 * @n: Maximum number of bytes to concatenate.
 *
 * Return: A pointer to the destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len = 0;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append up to n bytes from the source string */
	while (src[src_len] != '\0' && src_len < n)
	{
		dest[dest_len] = src[src_len];
		dest_len++;
		src_len++;
	}

	/* Ensure the destination string is null-terminated */
	dest[dest_len] = '\0';

	return (dest);
}
