#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Display information about a dog.
 * @d: Pointer to a dog structure.
 *
 * Description: This function prints details about a dog, including its name,
 * age, and owner. If any of these details are missing (NULL), it's indicated.
 * No values are returned.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!d->name)
			printf("Name: (unavailable)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (!d->owner)
			printf("Owner: (unavailable)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
