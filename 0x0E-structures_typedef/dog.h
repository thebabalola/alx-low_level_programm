#ifndef DOGH
#define DOGH

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;


/**
 * struct dog - Structure for storing information about dogs.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: Information about the dog's owner.
 *
 * Description: This structure is used to store information about a dog,
 * including its name, age, and owner's details.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
