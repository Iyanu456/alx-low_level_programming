#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initilizes a dog
 * @d: new dog struct
 * @name: name of dog
 * @age: dog's age
 * @owner: dog owner
 * Description: initializes a dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
