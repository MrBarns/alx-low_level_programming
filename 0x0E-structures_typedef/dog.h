#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct object representing a dog
 *
 * @name: name of dog
 * @age: age of dog in years
 * @owner: name of dog owner
 *
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
