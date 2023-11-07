#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes a struct dog.
 * @d: Pointer to a struct dog.
 * @name: Pointer to the dog's name.
 * @age: Age of the dog.
 * @owner: Pointer to the owner's name.
 *
 * Description: This function initializes a struct dog
 * with the provided values.
 * Return: No return value.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{

	d->name = name;
	d->age = age;
	d->owner = owner;

	}
}
