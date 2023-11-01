#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: The destination string.
 * @src: The source string to append.
 *
 * Return: A pointer to the concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;

	/* Calculate the length of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Calculate the length of the source string */
	while (src[src_len] != '\0')
	{
		dest[dest_len + src_len] = src[src_len];
		src_len++;
	}

	/* Null-terminate the concatenated string */
	dest[dest_len + src_len] = '\0';
	return (dest);
}
