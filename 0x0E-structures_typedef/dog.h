#ifndef DOG_H
#define DOG_H

/**
 * struct dog - abstraction of a dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's human
 *
 * Description: General representation of a dog for the purpose of alxSE
 * program
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
