#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenate all program arguments into a single string.
 *
 * @ac: Number of arguments.
 * @av: Array of argument strings.
 *
 * Return: A pointer to a character array.
 */

char *argstostr(int ac, char **av)
{
	char *result;
	int total_length = 0;
	int i, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++;  /* Account for space between arguments */
	}

	result = malloc((total_length + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	/* Fill the result with concatenated arguments */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[k] = av[i][j];
			k++;
		}
		result[k] = '\n';  /* Add a newline character between arguments */
		k++;
	}
	result[k] = '\0';  /* Null-terminate the result string */

	return (result);
}
