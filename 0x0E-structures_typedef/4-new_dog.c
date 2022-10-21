#include "dog.h"
#include <stdlib.h>
dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name, *new_owner;

	dog_t *new_dog;

	new_name = name;
	new_owner = owner;
	new_dog = malloc(sizeof(dog_t));
	new_dog->name = new_name;
	new_dog->owner = new_owner;
	new_dog->age = age;
	return (new_dog);
}
