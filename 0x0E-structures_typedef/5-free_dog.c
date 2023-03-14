#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free a memory holding a dog variable
 * @d: dog variable
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
