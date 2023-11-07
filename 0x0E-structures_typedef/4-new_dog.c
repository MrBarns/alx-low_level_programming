#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: name of new dog
 * @age: age of new dog
 * @owner: new dog's owner
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	char *n_name, *n_owner;
	unsigned int x;

	if (name == NULL || owner == NULL)
		return (NULL);

	n_dog = malloc(sizeof(dog_t));
	n_name = malloc(sizeof(name));
	n_owner = malloc(sizeof(owner));

	if (n_dog == NULL || n_name == NULL || n_owner == NULL)
	{
		free(n_dog);
		free(n_name);
		free(n_owner);
		return (NULL);
	}

	for (x = 0; name[x] != '\0'; x++)
		n_name[x] = name[x];
	for (x = 0; owner[x] != '\0'; x++)
		n_owner[x] = owner[x];

	n_dog->name = n_name;
	n_dog->age = age;
	n_dog->owner = n_owner;

	return (n_dog);
}
