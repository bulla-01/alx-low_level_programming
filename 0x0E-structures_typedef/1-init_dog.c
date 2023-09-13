#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of typ estruct dog
 * @d: pointer to stuct dog to initialize
 * @age: age to initialize
 * @name: name to initialize
 * @owner: owner to initialize
 */
void init_dog(struct do *d, char *name, float age, char *owner)
{
	if (d == NULL)

	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
