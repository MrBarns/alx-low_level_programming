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
	unsigned int x;

	if (name == NULL || owner == NULL)
		return (NULL);
	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	n_dog->name = malloc(sizeof(name));
	n_dog->owner = malloc(sizeof(owner));
	if (n_dog->owner == NULL || n_dog->name == NULL)
	{
		free(n_dog->owner);
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}

	for (x = 0; name[x] != '\0'; x++)
		n_dog->name[x] = name[x];
	n_dog->age = age;
	for (x = 0; owner[x] != '\0'; x++)
		n_dog->owner[x] = owner[x];

	return (n_dog);
}
