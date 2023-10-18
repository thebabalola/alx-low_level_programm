#include "main.h"

/**
 * _strcpy - copies string pointed to by src to dest.
 * @dest: destination.
 * @src: source.
 * Return: pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while ((*dest = *src) != '\0') {
		dest++;
		src++;
	}

	return original_dest;
}
