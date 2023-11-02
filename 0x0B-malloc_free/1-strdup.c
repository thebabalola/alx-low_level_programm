#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Allocates memory for a new string and copies the input string.
 * @str: Input string.
 *
 * Return: A pointer to a new string.
 */
char *_strdup(char *str)
{
	char *newStr;
	unsigned int length, i;

	if (str == NULL)
		return (NULL);

	length = 0;
	while (str[length] != '\0')
		length++;

	newStr = (char *)malloc(sizeof(char) * (length + 1));

	if (newStr == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		newStr[i] = str[i];

	return (newStr);
}
