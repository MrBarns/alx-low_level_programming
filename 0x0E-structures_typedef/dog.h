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

typedef struct dog dog_t;

void free_dog(dog_t *d);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif