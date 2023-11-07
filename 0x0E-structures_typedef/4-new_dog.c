#include "dog.h"
#include <stdlib.h>

/**
 * create_dog - Creates a new dog with a given name, age, and owner.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The owner's name.
 *
 * Return: A pointer to the newly created dog.
 * If it fails, returns NULL.
 */

dog_t *create_dog(char *name, float age, char *owner)
{
	dog_t *big_dog;
	int i, name_length = 0, owner_length = 0;

	big_dog = malloc(sizeof(*big_dog));

	if (big_dog == NULL || !name || !owner)
	{
		free(big_dog);
		return (NULL);
	}

		while (name[name_length])
		name_length++;

		while (owner[owner_length])
			owner_length++;

		big_dog->name = malloc(name_length + 1);
	big_dog->owner = malloc(owner_length + 1);

	if (!(big_dog->name) || !(big_dog->owner))
	{
		free(big_dog->owner);
		free(big_dog->name);
		free(big_dog);
		return (NULL);
	}

	for (i = 0; i < name_length; i++)
		big_dog->name[i] = name[i];
	big_dog->name[name_length] = '\0';

	big_dog->age = age;

	for (i = 0; i < owner_length; i++)
		big_dog->owner[i] = owner[i];
	big_dog->owner[owner_length] = '\0';

	return (big_dog);
}
