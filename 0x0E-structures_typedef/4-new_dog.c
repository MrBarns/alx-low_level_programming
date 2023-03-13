#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog variable
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to the new dog variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	unsigned int n, o, c;
	char *new_n, *new_o;

	doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
	{
		free(doggy);
		return (NULL);
	}

	for (n = 0; *(name + n) != '\0'; n++)
		;
	for (o = 0; *(owner + o) != '\0'; o++)
		;

	new_n = malloc(sizeof(char) * (n + 1));
	new_o = malloc(sizeof(char) * (o + 1));

	if (new_o == NULL || new_n == NULL)
	{
		free(new_n);
		free(new_o);
		return (NULL);
	}

	for (c = 0; c < n; c++)
		*(new_n + c) = *(name + c);

	for (c = 0; c < o; c++)
		*(new_o + c) = *(owner + c);

	doggy->name = new_n;
	doggy->age = age;
	doggy->owner = new_o;

	return (doggy);
}
