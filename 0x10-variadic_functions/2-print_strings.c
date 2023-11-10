#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings passed to the function.
 * @separator: The string separator between strings.
 * @n: The number of arguments to be received.
 *
 * Description: The function prints out Strings with strings between them.
 * Return: No return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *currentStr;

	va_list strgargs;

	va_start(strgargs, n);

	for (i = 0; i < n; i++)
	{
		currentStr = va_arg(strgargs, char*);

		if (currentStr)
			printf("%s", currentStr);
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strgargs);
}
